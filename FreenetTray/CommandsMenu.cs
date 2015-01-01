using System;
using System.Diagnostics;
using System.IO;
using System.Windows.Forms;
using FreenetTray.Browsers;
using FreenetTray.Properties;

namespace FreenetTray
{
    public partial class CommandsMenu : Form
    {
        private readonly BrowserUtil _browsers;
        private readonly NodeController _node;

        public CommandsMenu()
        {
            InitializeComponent();

            // TODO: This isn't called in the event of sudden termination. Maybe that's expected.
            FormClosed += (sender, e) => trayIcon.Visible = false;
            Shown += (sender, e) => Hide();

            // TODO: Read registry to check if the old tray runs at startup and change settings accordingly. (or offer to?)
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
            var applicationDir = Directory.GetParent(Application.ExecutablePath);
            Environment.CurrentDirectory = applicationDir.FullName;

            try
            {
                _node = new NodeController();
            }
            catch (FileNotFoundException e)
            {
                MissingFileExit(e.FileName);
                return;
            }
            catch (DirectoryNotFoundException e)
            {
                // TODO: More appropriate message - how to display?
                MissingFileExit(e.Message);
                return;
            }
            catch (NodeController.MissingConfigValueException e)
            {
                MissingConfigExit(e.Filename, e.Value);
                return;
            }

            _browsers = new BrowserUtil();
        }

        private void CommandsMenu_Load(object sender, EventArgs e)
        {
            _node.OnStarted += NodeStarted;
            _node.OnStopped += NodeStopped;
            _node.OnCrashed += NodeCrashed;
            _node.OnStartFailed += NodeStartFailed;

            // Set menu up for whether there is an existing node.
            RefreshMenu(_node.IsRunning());

            ReadCommandLine();
        }

        private void ReadCommandLine()
        {
            /*
             * TODO: Difficulties with this implementation are ignoring the application name if it is
             * present and supporting arguments with parameters.
             */
            foreach (var arg in Environment.GetCommandLineArgs())
            {
                switch (arg)
                {
                    case "-open":
                        openFreenetMenuItem_Click();
                        break;
                    case "-start":
                        startFreenetMenuItem_Click();
                        break;
                    case "-stop":
                        stopFreenetMenuItem_Click();
                        break;
                    case "-logs":
                        viewLogsMenuItem_Click();
                        break;
                    case "-preferences":
                        preferencesMenuItem_Click();
                        break;
                    case "-hide":
                        hideIconMenuItem_Click();
                        break;
                    case "-exit":
                        exitMenuItem_Click();
                        break;
                }
            }
        }

        private void NodeStarted(object sender, EventArgs e)
        {
            RefreshMenu(true);
        }

        private void NodeStopped(object sender, EventArgs e)
        {
            RefreshMenu(false);
        }

        private void NodeCrashed(object sender, EventArgs e)
        {
            RefreshMenu(false);
            BeginInvoke(new Action(new CrashDialog(_browsers, Start, ViewLogs).Show));
        }

        private void RefreshMenu(bool running)
        {
            BeginInvoke(new Action(() =>
            {
                startFreenetMenuItem.Enabled = !running;
                stopFreenetMenuItem.Enabled = running;
                hideIconMenuItem.Visible = running;
                trayIcon.Icon = running ? Resources.Online : Resources.Offline;
            }));
        }

        private void NodeStartFailed(NodeController.StartFailureType type)
        {
            // TODO: More informative action.
            RefreshMenu(false);
        }

        private void openFreenetMenuItem_Click(object sender = null, EventArgs e = null)
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
            _browsers.Open(new Uri(String.Format("http://localhost:{0:d}", _node.FProxyPort)));
        }

        private void startFreenetMenuItem_Click(object sender = null, EventArgs e = null)
        {
            Start();
        }

        private void Start()
        {
            BeginInvoke(new Action(_node.Start));
        }

        private void stopFreenetMenuItem_Click(object sender = null, EventArgs e = null)
        {
            Stop();
        }

        private void Stop()
        {
            BeginInvoke(new Action(_node.Stop));
        }

        private void viewLogsMenuItem_Click(object sender = null, EventArgs e = null)
        {
            ViewLogs();
        }

        private void ViewLogs()
        {
            Process.Start("notepad.exe", _node.WrapperLogFilename);
        }

        private void preferencesMenuItem_Click(object sender = null, EventArgs e = null)
        {
            new PreferencesWindow(_browsers.GetAvailableBrowsers()).Show();
        }

        private void hideIconMenuItem_Click(object sender = null, EventArgs e = null)
        {
            // The node will continue running.
            Application.Exit();
        }

        private void exitMenuItem_Click(object sender = null, EventArgs e = null)
        {
            Stop();
            Application.Exit();
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
