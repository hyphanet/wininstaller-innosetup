namespace FreenetTray
{
    partial class CrashDialog
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(CrashDialog));
            this.IconBox = new System.Windows.Forms.PictureBox();
            this.label1 = new System.Windows.Forms.Label();
            this.crashMessageLabel = new System.Windows.Forms.Label();
            this.ViewLogButton = new System.Windows.Forms.Button();
            this.SupportChatButton = new System.Windows.Forms.Button();
            this.MailingListButton = new System.Windows.Forms.Button();
            this.RestartButton = new System.Windows.Forms.Button();
            this.CloseButton = new System.Windows.Forms.Button();
            ((System.ComponentModel.ISupportInitialize)(this.IconBox)).BeginInit();
            this.SuspendLayout();
            // 
            // IconBox
            // 
            resources.ApplyResources(this.IconBox, "IconBox");
            this.IconBox.Name = "IconBox";
            this.IconBox.TabStop = false;
            // 
            // label1
            // 
            resources.ApplyResources(this.label1, "label1");
            this.label1.Name = "label1";
            // 
            // crashMessageLabel
            // 
            resources.ApplyResources(this.crashMessageLabel, "crashMessageLabel");
            this.crashMessageLabel.Name = "crashMessageLabel";
            // 
            // ViewLogButton
            // 
            resources.ApplyResources(this.ViewLogButton, "ViewLogButton");
            this.ViewLogButton.Name = "ViewLogButton";
            this.ViewLogButton.UseVisualStyleBackColor = true;
            this.ViewLogButton.Click += new System.EventHandler(this.ViewLogButton_Click);
            // 
            // SupportChatButton
            // 
            resources.ApplyResources(this.SupportChatButton, "SupportChatButton");
            this.SupportChatButton.Name = "SupportChatButton";
            this.SupportChatButton.UseVisualStyleBackColor = true;
            this.SupportChatButton.Click += new System.EventHandler(this.SupportChatButton_Click);
            // 
            // MailingListButton
            // 
            resources.ApplyResources(this.MailingListButton, "MailingListButton");
            this.MailingListButton.Name = "MailingListButton";
            this.MailingListButton.UseVisualStyleBackColor = true;
            this.MailingListButton.Click += new System.EventHandler(this.MailingListButton_Click);
            // 
            // RestartButton
            // 
            resources.ApplyResources(this.RestartButton, "RestartButton");
            this.RestartButton.Name = "RestartButton";
            this.RestartButton.UseVisualStyleBackColor = true;
            this.RestartButton.Click += new System.EventHandler(this.RestartButton_Click);
            // 
            // CloseButton
            // 
            this.CloseButton.DialogResult = System.Windows.Forms.DialogResult.Cancel;
            resources.ApplyResources(this.CloseButton, "CloseButton");
            this.CloseButton.Name = "CloseButton";
            this.CloseButton.UseVisualStyleBackColor = true;
            this.CloseButton.Click += new System.EventHandler(this.CloseButton_Click);
            // 
            // CrashDialog
            // 
            resources.ApplyResources(this, "$this");
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.CancelButton = this.CloseButton;
            this.Controls.Add(this.CloseButton);
            this.Controls.Add(this.RestartButton);
            this.Controls.Add(this.MailingListButton);
            this.Controls.Add(this.SupportChatButton);
            this.Controls.Add(this.ViewLogButton);
            this.Controls.Add(this.crashMessageLabel);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.IconBox);
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedDialog;
            this.MaximizeBox = false;
            this.MinimizeBox = false;
            this.Name = "CrashDialog";
            this.Load += new System.EventHandler(this.CrashDialog_Load);
            ((System.ComponentModel.ISupportInitialize)(this.IconBox)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.PictureBox IconBox;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label crashMessageLabel;
        private System.Windows.Forms.Button ViewLogButton;
        private System.Windows.Forms.Button SupportChatButton;
        private System.Windows.Forms.Button MailingListButton;
        private System.Windows.Forms.Button RestartButton;
        private System.Windows.Forms.Button CloseButton;
    }
}