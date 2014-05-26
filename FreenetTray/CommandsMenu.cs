using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Diagnostics;
using System.Drawing;
using System.Text;
using System.Windows.Forms;
using System.Resources;
using System.IO;
using System.Runtime.InteropServices;
using FreenetTray.Browsers;

namespace FreenetTray
{
    public partial class CommandsMenu : Form
    {
        // System Error Codes
        // See http://msdn.microsoft.com/en-us/library/windows/desktop/ms681382%28v=vs.85%29.aspx
        // TODO: Is there a C# assembly with these?
        private const int ERROR_FILE_NOT_FOUND = 0x2;
        private const int ERROR_INSUFFICIENT_BUFFER = 0x7A;
        private const int ERROR_ACCESS_DENIED = 0x5;

        private const string WrapperFilename = @"wrapper\freenetwrapper.exe";
        private const string FreenetIniFilename = @"freenet.ini";
        private const string WrapperConfFilename = "wrapper.conf";

        private readonly ProcessStartInfo WrapperInfo = new ProcessStartInfo();
        private Process Wrapper_;

        private readonly string AnchorFilename;
        private readonly string PidFilename;
        private readonly string WrapperLogFilename;
        private readonly int FProxyPort;

        private readonly BrowserUtil browsers;

        public CommandsMenu()
        {
            // TODO: This isn't called in the event of sudden termination. Maybe that's expected.
            FormClosed += (object sender, FormClosedEventArgs e) => trayIcon.Visible = false;
            Shown += (object sender, EventArgs e) => Hide();
            Load += (object sender, EventArgs e) => ReadCommandLine();

            // TODO: Read registry to check if the old tray runs at startup and change settings accordingly.
            /*
             * TODO: Will the settings be saved always or only if non-default? If always saved this
             * introduces a fingerprint of Freenet on the system even when it doesn't do anything on
             * startup.
             */

            /*
             * Set the working directory to the executable location to allow looking up relative paths
             * such as the wrapper. This is useful when launching the application at startup, when its
             * parent directory is not its working directory.
             * TODO: Would it be more appropriate to do an explicit relative lookup?
             */
            var ApplicationDir = Directory.GetParent(Application.ExecutablePath);
            Environment.CurrentDirectory = ApplicationDir.FullName;

            /*
             * Read wrapper config: wrapper log location, PID file location, anchor location.
             * The PID file location is specified on the command line, so if none is read
             * it will use a default. It's not in the default wrapper.conf and is defined on
             * the command line in run.sh.
             */
            PidFilename = "freenet.pid";
            try
            {
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
            }
            catch (FileNotFoundException)
            {
                MissingFileExit(WrapperFilename);
                return;
            }
            catch (DirectoryNotFoundException)
            {
                MissingFileExit(WrapperFilename);
                return;
            }

            // TODO: A mapping between config location and variable would reduce verbosity here too.
            if (WrapperLogFilename == null)
            {
                MissingConfigExit(WrapperConfFilename, "wrapper.logfile");
                return;
            }

            if (AnchorFilename == null)
            {
                MissingConfigExit(WrapperConfFilename, "wrapper.anchorfile");
                return;
            }

            // Read Freenet config: FProxy port
            // TODO: Does this need to wait until the node is running for the first run?
            try
            {
                foreach (var line in File.ReadAllLines(FreenetIniFilename))
                {
                    if (Defines(line, "fproxy.port"))
                    {
                        var isValid = int.TryParse(Value(line), out FProxyPort);
                        if (!isValid)
                        {
                            MissingConfigExit(FreenetIniFilename, "fproxy.port");
                            return;
                        }
                        break;
                    }
                }
            }
            catch (FileNotFoundException)
            {
                MissingFileExit(FreenetIniFilename);
                return;
            }

            InitializeComponent();

            /*
             * Prompt creation of a handle. The the wrapper exit event handler needs one to use BeginInvoke.
             * See http://msdn.microsoft.com/en-us/library/system.windows.forms.control.invokerequired.aspx
             */
            var _ = contextMenu.Handle;

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

            /*
             * Hide the wrapper window when launching it. This prevents (or at least heavily complicates)
             * stopping it with Process.CloseMainWindow() or by sending ctrl + C.
             */
            WrapperInfo.FileName = WrapperFilename;
            // TODO: Is it worthwhile to omit the pidfile here when it's in the config file?
            WrapperInfo.Arguments = "-c " + WrapperConfFilename + " wrapper.pidfile=" + PidFilename;
            WrapperInfo.UseShellExecute = false;
            WrapperInfo.CreateNoWindow = true;

            browsers = new BrowserUtil();

            RefreshRunning();
        }

        private void ReadCommandLine()
        {
            /*
             * TODO: Difficulties with this implementation are ignoring the application name if it is
             * present and supporting arguments with parameters.
             */
            foreach (var arg in Environment.GetCommandLineArgs())
            {
                /*
                 * TODO: Is it preferable to have more clearly-named functions that the event handlers
                 * thinly wrap, or call the event handlers with null arguments?
                 */
                if (arg == "-open")
                {
                    openFreenetMenuItem_Click(null, null);
                }
                else if (arg == "-start")
                {
                    Start();
                }
                else if (arg == "-stop")
                {
                    Stop();
                }
                else if (arg == "-logs")
                {
                    viewLogsMenuItem_Click(null, null);
                }
                else if (arg == "-preferences")
                {
                    preferencesMenuItem_Click(null, null);
                }
                else if (arg == "-hide")
                {
                    hideIconMenuItem_Click(null, null);
                }
                else if (arg == "-exit")
                {
                    exitMenuItem_Click(null, null);
                }
            }
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
            contextMenu.BeginInvoke(new Action(RefreshRunning));
        }

        private void RefreshRunning()
        {
            bool running = IsRunning();
            startFreenetMenuItem.Enabled = !running;
            stopFreenetMenuItem.Enabled = running;
            hideIconMenuItem.Visible = running;
            if (running)
            {
                trayIcon.Icon = Properties.Resources.Online;
            }
            else
            {
                trayIcon.Icon = Properties.Resources.Offline;
            }
        }

        private Boolean IsRunning()
        {
            return Wrapper_ != null && !Wrapper_.HasExited;
        }

        private void openFreenetMenuItem_Click(object sender, EventArgs e)
        {
            Start();
            /*
             * TODO: Check that FProxy is listening first? The browser should wait before timing out
             * so there's some time for startup, but the error message the browser gives doesn't make
             * it clear what's going on.
             *
             * Maybe open the browser first and then if there's nothing on the port after a timeout say
             * something about how Freenet isn't responding.
             */
            browsers.Open(new Uri(String.Format("http://localhost:{0:d}", FProxyPort)));
        }

        private void startFreenetMenuItem_Click(object sender, EventArgs e)
        {
            Start();
        }

        private void Start()
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
            catch (FileNotFoundException)
            {
                MissingFileExit(WrapperFilename);
                Application.Exit();
            }
            catch (Win32Exception ex)
            {
                // http://msdn.microsoft.com/en-us/library/0w4h05yb%28v=vs.110%29.aspx
                switch (ex.NativeErrorCode)
                {
                    case ERROR_FILE_NOT_FOUND:
                        // TODO: This seems slightly different - error on opening, not file not found.
                        MissingFileExit(WrapperFilename);
                        break;
                    case ERROR_INSUFFICIENT_BUFFER:
                    case ERROR_ACCESS_DENIED:
                        MessageBox.Show(strings.PathLengthExceededBody,
                                        strings.PathLengthExceededTitle,
                                        MessageBoxButtons.OK, MessageBoxIcon.Error);
                        break;
                    default:
                        // Getting here means Process.Start() gave an error code it is not documented to give.
                        MessageBox.Show(String.Format(strings.UnknownWrapperLaunchErrorBody, ex.Message, ex.NativeErrorCode),
                                        strings.UnknownWrapperLaunchErrorTitle,
                                        MessageBoxButtons.OK, MessageBoxIcon.Error);
                        break;
                }
                Application.Exit();
            }

            RefreshRunning();
        }

        private void stopFreenetMenuItem_Click(object sender, EventArgs e)
        {
            Debug.Assert(Wrapper_ != null, "No handle to wrapper process even though it's considered running.");
            // A refresh will trigger when the wrapper fires an exit event.
            Stop();
        }

        private void viewLogsMenuItem_Click(object sender, EventArgs e)
        {
            Process.Start("notepad.exe", WrapperLogFilename);
        }

        private void preferencesMenuItem_Click(object sender, EventArgs e)
        {
            new PreferencesWindow().Show();
        }

        private void hideIconMenuItem_Click(object sender, EventArgs e)
        {
            // The wrapper will continue running.
            Application.Exit();
        }

        private void exitMenuItem_Click(object sender, EventArgs e)
        {
            Stop();
            Application.Exit();
        }

        private void Stop()
        {
            if (IsRunning())
            {
                File.Delete(AnchorFilename);
            }
        }

        private void MissingFileExit(string filename)
        {
            MessageBox.Show(String.Format(strings.FileNotFoundBody, filename),
                strings.FileNotFoundTitle,
                MessageBoxButtons.OK, MessageBoxIcon.Error);
            Application.Exit();
        }

        private void MissingConfigExit(string filename, string configName)
        {
            MessageBox.Show(String.Format(strings.CannotReadConfigBody, filename, configName),
                strings.CannotReadConfigTitle,
                MessageBoxButtons.OK, MessageBoxIcon.Error);
            Application.Exit();
        }

        private void trayIcon_MouseClick(object sender, MouseEventArgs e)
        {
            if (e.Button == MouseButtons.Left)
            {
                openFreenetMenuItem_Click(sender, e);
            }
        }
    }
}
