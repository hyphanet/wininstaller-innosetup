using System;
using System.Drawing;
using System.Windows.Forms;
using FreenetTray.Browsers;

namespace FreenetTray
{
    public partial class CrashDialog : Form
    {
        private readonly BrowserUtil _browser;
        private readonly Action _nodeStarter;
        private readonly Action _logOpener;

        public CrashDialog(BrowserUtil browser, Action nodeStarter, Action logOpener)
        {
            InitializeComponent();
            _browser = browser;
            _nodeStarter = nodeStarter;
            _logOpener = logOpener;
        }

        private void CrashDialog_Load(object sender, EventArgs e)
        {
            IconBox.Image = SystemIcons.Exclamation.ToBitmap();
        }

        private void ViewLogButton_Click(object sender, EventArgs e)
        {
            _logOpener();
        }

        private void SupportChatButton_Click(object sender, EventArgs e)
        {
            _browser.Open(new Uri("https://freenetproject.org/irc.html"));
        }

        private void MailingListButton_Click(object sender, EventArgs e)
        {
            _browser.Open(new Uri("https://emu.freenetproject.org/cgi-bin/mailman/listinfo/support/"));
        }

        private void RestartButton_Click(object sender, EventArgs e)
        {
            _nodeStarter();
        }

        private void CloseButton_Click(object sender, EventArgs e)
        {
            Close();
        }
    }
}
