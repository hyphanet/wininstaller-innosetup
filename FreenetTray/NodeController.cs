using System;
using System.ComponentModel;
using System.Diagnostics;
using System.IO;
using System.Linq;

namespace FreenetTray
{
    public class NodeController
    {
        public enum CrashType
        {
            WrapperFileNotFound,
            PathTooLong,
            WrapperCrashed,
        }

        public class MissingConfigValueException : Exception
        {
            public readonly string Filename;
            public readonly string Value;

            public MissingConfigValueException(string filename, string value)
            {
                Filename = filename;
                Value = value;
            }
        }

        // System Error Codes
        // See http://msdn.microsoft.com/en-us/library/windows/desktop/ms681382%28v=vs.85%29.aspx
        // TODO: Is there a C# assembly with these?
        private const int ERROR_FILE_NOT_FOUND = 0x2;
        private const int ERROR_INSUFFICIENT_BUFFER = 0x7A;
        private const int ERROR_ACCESS_DENIED = 0x5;

        public delegate void CrashHandler(CrashType type);

        public CrashHandler OnCrashed;
        public EventHandler OnStarted;
        public EventHandler OnStopped;

        // TODO: What else?
        private Process _wrapper;
        private readonly ProcessStartInfo _wrapperInfo = new ProcessStartInfo();

        public const string WrapperFilename = @"wrapper\freenetwrapper.exe";
        private const string FreenetIniFilename = @"freenet.ini";
        private const string WrapperConfFilename = "wrapper.conf";

        private readonly string _anchorFilename;
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
            var pidFilename = "freenet.pid";
            // wrapper.conf is relative to the wrapper's location.
            var wrapperDir = Directory.GetParent(WrapperFilename);
            foreach (var line in File.ReadAllLines(wrapperDir.FullName + '\\' + WrapperConfFilename))
            {
                // TODO: Map between constants and variables to reduce repetition?
                if (Defines(line, "wrapper.logfile"))
                {
                    WrapperLogFilename = Value(line);
                }
                else if (Defines(line, "wrapper.pidfile"))
                {
                    pidFilename = Value(line);
                }
                else if (Defines(line, "wrapper.anchorfile"))
                {
                    _anchorFilename = Value(line);
                }
            }

            // TODO: A mapping between config location and variable would reduce verbosity here too.
            if (WrapperLogFilename == null)
            {
                throw new MissingConfigValueException(WrapperConfFilename, "wrapper.logfile");
            }

            if (_anchorFilename == null)
            {
                throw new MissingConfigValueException(WrapperConfFilename, "wrapper.anchorfile");
            }

            // Search for an existing wrapper process.
            try
            {
                var reader = new StreamReader(pidFilename);
                var line = reader.ReadLine();

                if (line != null)
                {
                    var pid = int.Parse(line);
                    _wrapper = Process.GetProcessById(pid);
                    _wrapper.EnableRaisingEvents = true;
                    _wrapper.Exited += Wrapper_Exited;
                }
            }
            catch (ArgumentException)
            {
                Debug.WriteLine("No process has the PID in the PID file.");
                // The wrapper can refuse to start if there is a stale PID file - "strict".
                try
                {
                    File.Delete(pidFilename);
                }
                catch (IOException)
                {
                    Debug.WriteLine("Stale PID file is still held.");
                }
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
            foreach (var line in File.ReadAllLines(FreenetIniFilename).Where(line => Defines(line, "fproxy.port")))
            {
                var isValid = int.TryParse(Value(line), out FProxyPort);
                if (!isValid)
                {
                    throw new MissingConfigValueException(FreenetIniFilename, "fproxy.port");
                }
                break;
            }

            /*
             * Hide the wrapper window when launching it. This prevents (or at least heavily complicates)
             * stopping it with Process.CloseMainWindow() or by sending ctrl + C.
             */
            _wrapperInfo.FileName = WrapperFilename;
            // TODO: Is it worthwhile to omit the pidfile here when it's in the config file?
            _wrapperInfo.Arguments = "-c " + WrapperConfFilename + " wrapper.pidfile=" + pidFilename;
            _wrapperInfo.UseShellExecute = false;
            _wrapperInfo.CreateNoWindow = true;
        }

        private bool Defines(string line, string key)
        {
            // TODO: Does this need to tolerate whitespace between the key and the =? Find an INI library somewhere maybe?
            return line.StartsWith(key + "=");
        }

        private string Value(string line)
        {
            return line.Split(new[] { '=' }, 2)[1];
        }

        private void Wrapper_Exited(object sender, EventArgs e)
        {
            // TODO: Is exit code enough to distinguish between stopping and crashing?
            if (_wrapper.ExitCode == 0)
            {
                OnStopped(sender, e);
            }
            else
            {
                OnCrashed(CrashType.WrapperCrashed);
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
                // TODO: Under what circumstances will Process.Start() return null?
                _wrapper = Process.Start(_wrapperInfo);
                _wrapper.EnableRaisingEvents = true;
                _wrapper.Exited += Wrapper_Exited;
            }
            catch (Win32Exception ex)
            {
                // http://msdn.microsoft.com/en-us/library/0w4h05yb%28v=vs.110%29.aspx
                switch (ex.NativeErrorCode)
                {
                    case ERROR_FILE_NOT_FOUND:
                        OnCrashed(CrashType.WrapperFileNotFound);
                        return;
                    case ERROR_INSUFFICIENT_BUFFER:
                    case ERROR_ACCESS_DENIED:
                        OnCrashed(CrashType.PathTooLong);
                        return;
                    default:
                        // Process.Start() gave an error code it is not documented to give.
                        throw;
                }
            }

            OnStarted(this, null);
        }

        public void Stop()
        {
            if (IsRunning())
            {
                File.Delete(_anchorFilename);
            }
        }

        // TODO: With everything being event-driven this doesn't seem necessary. Except for the initial run maybe?
        public Boolean IsRunning()
        {
            return _wrapper != null && !_wrapper.HasExited;
        }
    }
}
