using System;
using System.Drawing;
using System.Windows.Forms;
using FreenetTray.Browsers;

namespace FreenetTray
{
    public partial class CrashDialog : Form
    {
        private readonly Action _nodeStarter;
        private readonly Action _logOpener;
        private readonly NodeController.CrashType _crashType;

        public CrashDialog(NodeController.CrashType crashType, Action nodeStarter, Action logOpener)
        {
            InitializeComponent();
            _nodeStarter = nodeStarter;
            _logOpener = logOpener;
            _crashType = crashType;
        }

        private void CrashDialog_Load(object sender, EventArgs e)
        {
            IconBox.Image = SystemIcons.Exclamation.ToBitmap();

            var additional = "\n" + strings.AdditionalCrashInfo + " ";
            switch (_crashType)
            {
                case NodeController.CrashType.WrapperFileNotFound:
                    additional += string.Format(strings.WrapperFileNotFound, NodeController.WrapperFilename);
                    break;
                case NodeController.CrashType.PathTooLong:
                    additional += strings.PathTooLong;
                    break;
                case NodeController.CrashType.WrapperCrashed:
                    additional = "";
                    break;
            }

            crashMessageLabel.Text += additional;
        }

        private void ViewLogButton_Click(object sender, EventArgs e)
        {
            _logOpener();
        }

        private void SupportChatButton_Click(object sender, EventArgs e)
        {
            BrowserUtil.Open(new Uri("https://freenetproject.org/irc.html"));
        }

        private void MailingListButton_Click(object sender, EventArgs e)
        {
            BrowserUtil.Open(new Uri("https://emu.freenetproject.org/cgi-bin/mailman/listinfo/support/"));
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
