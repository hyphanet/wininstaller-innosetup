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
        private const string WrapperConfFilename = @"wrapper\wrapper.conf";
        private const string FreenetIniFilename = @"freenet.ini";

        private readonly ProcessStartInfo WrapperInfo = new ProcessStartInfo();
        private Process Wrapper_;

        private readonly string AnchorFilename;
        private readonly string PidFilename;
        private readonly string WrapperLogFilename;
        private readonly int FProxyPort;

        public CommandsMenu()
        {
            FormClosed += CommandMenu_FormClosed;

            /*
             * Read wrapper config: wrapper log location, PID file location, anchor location.
             * The PID file location is specified on the command line, so if none is read
             * it will use a default. It's not in the default wrapper.conf and is defined on
             * the command line in run.sh.
             */
            PidFilename = "freenet.pid";
            try
            {
                foreach (var line in File.ReadAllLines(WrapperConfFilename))
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
            }

            // TODO: Error out if anchor / wrapper locations not found

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
                            // TODO: Error box
                            Application.Exit();
                        }
                        break;
                    }
                }
            }
            catch (FileNotFoundException)
            {
                MissingFileExit(FreenetIniFilename);
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
            WrapperInfo.Arguments = "-c wrapper.conf wrapper.pidfile=" + PidFilename;
            WrapperInfo.UseShellExecute = false;
            WrapperInfo.CreateNoWindow = true;

            InitializeComponent();
            RefreshRunning();
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
        }

        private Boolean IsRunning()
        {
            return Wrapper_ != null && !Wrapper_.HasExited;
        }

        // TODO: This isn't called in the event of sudden termination. Maybe that's expected.
        private void CommandMenu_FormClosed(object sender, FormClosedEventArgs e)
        {
            trayIcon.Visible = false;
        }

        private void openFreenetMenuItem_Click(object sender, EventArgs e)
        {
            Start();
            // TODO: Find browsers; launch them.
            Process.Start(String.Format("http://localhost:{0:d}", FProxyPort));
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
            // TODO: Open preferences dialog
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
    }
}
