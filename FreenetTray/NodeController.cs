using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Diagnostics;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace FreenetTray
{
    class NodeController
    {
        public enum StartFailureType
        {
            OpeningWrapperFailed,
            PathTooLong,
        }

        public class MissingConfigValueException : Exception
        {
            public readonly string filename;
            public readonly string value;

            public MissingConfigValueException(string filename, string value)
            {
                this.filename = filename;
                this.value = value;
            }
        }

        // System Error Codes
        // See http://msdn.microsoft.com/en-us/library/windows/desktop/ms681382%28v=vs.85%29.aspx
        // TODO: Is there a C# assembly with these?
        private const int ERROR_FILE_NOT_FOUND = 0x2;
        private const int ERROR_INSUFFICIENT_BUFFER = 0x7A;
        private const int ERROR_ACCESS_DENIED = 0x5;

        public delegate void StartFailureHandler(StartFailureType type);

        public StartFailureHandler OnStartFailed;
        public EventHandler OnStarted;
        public EventHandler OnStopped;
        public EventHandler OnCrashed;

        // TODO: What else?
        private Process Wrapper_;
        private readonly ProcessStartInfo WrapperInfo = new ProcessStartInfo();

        private const string WrapperFilename = @"wrapper\freenetwrapper.exe";
        private const string FreenetIniFilename = @"freenet.ini";
        private const string WrapperConfFilename = "wrapper.conf";

        private readonly string AnchorFilename;
        private readonly string PidFilename;
        public readonly string WrapperLogFilename;
        public readonly int FProxyPort;

        // TODO: Where to document? Thows FileNotFound; DirectoryNotFound
        public NodeController()
        {
            // TODO: 
            /*
             * Read wrapper config: wrapper log location, PID file location, anchor location.
             * The PID file location is specified on the command line, so if none is read
             * it will use a default. It's not in the default wrapper.conf and is defined on
             * the command line in run.sh.
             */
            PidFilename = "freenet.pid";
            // wrapper.conf is relative to the wrapper's location.
            var WrapperDir = Directory.GetParent(WrapperFilename);
            foreach (var line in File.ReadAllLines(WrapperDir.FullName + '\\' + WrapperConfFilename))
            {
                // TODO: Map between constants and variables to reduce repetition?
                if (Defines(line, "wrapper.logfile"))
                {
                    WrapperLogFilename = Value(line);
                }
                else if (Defines(line, "wrapper.pidfile"))
                {
                    PidFilename = Value(line);
                }
                else if (Defines(line, "wrapper.anchorfile"))
                {
                    AnchorFilename = Value(line);
                }
            }

            // TODO: A mapping between config location and variable would reduce verbosity here too.
            if (WrapperLogFilename == null)
            {
                throw new MissingConfigValueException(WrapperConfFilename, "wrapper.logfile");
            }

            if (AnchorFilename == null)
            {
                throw new MissingConfigValueException(WrapperConfFilename, "wrapper.anchorfile");
            }

            // Search for an existing wrapper process.
            try
            {
                var reader = new StreamReader(PidFilename);
                int pid = int.Parse(reader.ReadLine());
                Wrapper_ = Process.GetProcessById(pid);
                Wrapper_.EnableRaisingEvents = true;
                Wrapper_.Exited += Wrapper_Exited;
            }
            catch (ArgumentException)
            {
                Debug.WriteLine("No process has the PID in the PID file.");
                // The wrapper can refuse to start if there is a stale PID file - "strict".
                File.Delete(PidFilename);
            }
            catch (FormatException)
            {
                Debug.WriteLine("PID file does not contain an integer.");
            }
            catch (OverflowException)
            {
                Debug.WriteLine("PID file does not contain an integer.");
            }
            catch (FileNotFoundException)
            {
                Debug.WriteLine("PID file not found.");
            }

            // Read Freenet config: FProxy port TODO: Use ini-parser instead
            // TODO: Does this need to wait until the node is running for the first run?
            foreach (var line in File.ReadAllLines(FreenetIniFilename))
            {
                if (Defines(line, "fproxy.port"))
                {
                    var isValid = int.TryParse(Value(line), out FProxyPort);
                    if (!isValid)
                    {
                        throw new MissingConfigValueException(FreenetIniFilename, "fproxy.port");
                    }
                    break;
                }
            }

            /*
             * Hide the wrapper window when launching it. This prevents (or at least heavily complicates)
             * stopping it with Process.CloseMainWindow() or by sending ctrl + C.
             */
            WrapperInfo.FileName = WrapperFilename;
            // TODO: Is it worthwhile to omit the pidfile here when it's in the config file?
            WrapperInfo.Arguments = "-c " + WrapperConfFilename + " wrapper.pidfile=" + PidFilename;
            WrapperInfo.UseShellExecute = false;
            WrapperInfo.CreateNoWindow = true;
        }

        private bool Defines(string line, string key)
        {
            // TODO: Does this need to tolerate whitespace between the key and the =? Find an INI library somewhere maybe?
            return line.StartsWith(key + "=");
        }

        private string Value(string line)
        {
            return line.Split(new char[] { '=' }, 2)[1];
        }

        private void Wrapper_Exited(object sender, EventArgs e)
        {
            // TODO: Is exit code enough to distinguish between stopping and crashing?
            if (Wrapper_.ExitCode == 0)
            {
                OnStopped(sender, e);
            }
            else
            {
                OnCrashed(sender, e);
            }
        }

        /*
         * TODO: What are the function documentation comments supposed to be formatted like?
         * Start the node if it is not already started.
         * 
         * Throws FileNotFoundException
         */
        public void Start()
        {
            if (IsRunning())
            {
                return;
            }

            try
            {
                Wrapper_ = Process.Start(WrapperInfo);
                Wrapper_.EnableRaisingEvents = true;
                Wrapper_.Exited += Wrapper_Exited;
            }
            catch (Win32Exception ex)
            {
                // http://msdn.microsoft.com/en-us/library/0w4h05yb%28v=vs.110%29.aspx
                switch (ex.NativeErrorCode)
                {
                    case ERROR_FILE_NOT_FOUND:
                        OnStartFailed(StartFailureType.OpeningWrapperFailed);
                        break;
                    case ERROR_INSUFFICIENT_BUFFER:
                    case ERROR_ACCESS_DENIED:
                        OnStartFailed(StartFailureType.PathTooLong);
                        break;
                    default:
                        // Getting here means Process.Start() gave an error code it is not documented to give.
                        /* TODO
                        MessageBox.Show(String.Format(strings.UnknownWrapperLaunchErrorBody, ex.Message, ex.NativeErrorCode),
                                        strings.UnknownWrapperLaunchErrorTitle,
                                        MessageBoxButtons.OK, MessageBoxIcon.Error);
                         */
                        break;
                }
            }

            OnStarted(this, null);
        }

        public void Stop()
        {
            if (IsRunning())
            {
                File.Delete(AnchorFilename);
            }
        }

        // TODO: With everything being event-driven this doesn't seem necessary. Except for the initial run maybe?
        public Boolean IsRunning()
        {
            return Wrapper_ != null && !Wrapper_.HasExited;
        }
    }
}
