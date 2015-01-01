using System;
using System.Drawing;
using System.Windows.Forms;

namespace FreenetTray
{
    public partial class CrashDialog : Form
    {
        public enum CrashOption
        {
            ViewLog,
            OpenChat,
            OpenMailingList,
            Restart,
            Close,
        };

        public CrashOption Selection { get; private set; }

        public CrashDialog()
        {
            InitializeComponent();
        }

        private void CrashDialog_Load(object sender, EventArgs e)
        {
            IconBox.Image = SystemIcons.Exclamation.ToBitmap();
        }

        private void ViewLogButton_Click(object sender, EventArgs e)
        {
            Selection = CrashOption.ViewLog;
            Close();
        }

        private void SupportChatButton_Click(object sender, EventArgs e)
        {
            Selection = CrashOption.OpenChat;
            Close();
        }

        private void MailingListButton_Click(object sender, EventArgs e)
        {
            Selection = CrashOption.OpenMailingList;
            Close();
        }

        private void RestartButton_Click(object sender, EventArgs e)
        {
            Selection = CrashOption.Restart;
            Close();
        }

        private void CloseButton_Click(object sender, EventArgs e)
        {
            Selection = CrashOption.Close;
            Close();
        }
    }
}
