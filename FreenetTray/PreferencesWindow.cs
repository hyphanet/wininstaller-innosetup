using FreenetTray.Browsers;
using Microsoft.Win32;
using System;
using System.Collections.Generic;
using System.Windows.Forms;

namespace FreenetTray
{
    public partial class PreferencesWindow : Form
    {
        private const int StartIconIndex = 0;
        private const int StartFreenetIndex = 1;

        private const string RegistryStartupName = "Freenet";
        private const string StartupKeyLocation = @"SOFTWARE\Microsoft\Windows\CurrentVersion\Run";

        public PreferencesWindow(IEnumerable<string> availableBrowsers)
        {
            InitializeComponent();

            StartupCheckboxList.SetItemChecked(StartIconIndex,
                                               Properties.Settings.Default.StartIcon);
            StartupCheckboxList.SetItemChecked(StartFreenetIndex,
                                               Properties.Settings.Default.StartFreenet);

            // TODO: Localize?
            BrowserChoice.Items.Add(BrowserUtil.Auto);
            foreach (var browser in availableBrowsers)
            {
                BrowserChoice.Items.Add(browser);
            }
            BrowserChoice.Text = Properties.Settings.Default.UseBrowser;
            if (!BrowserChoice.Items.Contains(BrowserChoice.Text))
            {
                // TODO: User's preference not found. Worthy of a message box?
                BrowserChoice.Text = BrowserUtil.Auto;
            }

            SlowStartOption.Checked = Properties.Settings.Default.ShowSlowOpenTip;

            LogLevelChoice.Text = Properties.Settings.Default.LogLevel;
        }

        private void Apply_Click(object sender, EventArgs e)
        {
            Properties.Settings.Default.StartIcon = StartupCheckboxList.GetItemChecked(StartIconIndex);
            Properties.Settings.Default.StartFreenet = StartupCheckboxList.GetItemChecked(StartFreenetIndex);

            Properties.Settings.Default.UseBrowser = (string)BrowserChoice.SelectedItem;

            Properties.Settings.Default.ShowSlowOpenTip = SlowStartOption.Checked;

            // TODO: Apply this without a restart. Seems difficult with NLog.
            Properties.Settings.Default.LogLevel = LogLevelChoice.Text;

            Properties.Settings.Default.Save();

            if (Properties.Settings.Default.StartIcon)
            {
                // Start Freenet or just the icon.
                SetStartupArguments(Properties.Settings.Default.StartFreenet ? "-start" : "");
            }
            else if (Properties.Settings.Default.StartFreenet)
            {
                // Just start Freenet.
                SetStartupArguments("-start -hide");
            }
            else
            {
                // Do not start.
                SetStartupArguments(null);
            }

            Close();
        }

        private void Cancel_Click(object sender, EventArgs e)
        {
            Close();
        }

        // Set the tray arguments on Windows startup, or remove if from startup if arguments is null.
        private static void SetStartupArguments(string arguments)
        {
            using (var key = Registry.CurrentUser.OpenSubKey(StartupKeyLocation, true))
            {
                // TODO: Assuming startup registry location exists. Is this viable?
                key.DeleteValue(RegistryStartupName, false);

                if (arguments != null)
                {
                    /*
                     * Double quotes are required around the executable path to get multiple(?) command
                     * line arguments.
                     */
                    key.SetValue(RegistryStartupName, '"' + Application.ExecutablePath + "\" " + arguments);
                }
            }
        }
    }
}
