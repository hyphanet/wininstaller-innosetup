namespace FreenetTray
{
    partial class PreferencesWindow
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
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(PreferencesWindow));
            this.StartupCheckboxList = new System.Windows.Forms.CheckedListBox();
            this.StartupLabel = new System.Windows.Forms.Label();
            this.ApplyButton = new System.Windows.Forms.Button();
            this.ClosePerefencesButton = new System.Windows.Forms.Button();
            this.BrowserChoice = new System.Windows.Forms.ComboBox();
            this.BrowserLabel = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // StartupCheckboxList
            // 
            this.StartupCheckboxList.BackColor = System.Drawing.SystemColors.Window;
            this.StartupCheckboxList.BorderStyle = System.Windows.Forms.BorderStyle.None;
            this.StartupCheckboxList.CheckOnClick = true;
            this.StartupCheckboxList.FormattingEnabled = true;
            this.StartupCheckboxList.Items.AddRange(new object[] {
            resources.GetString("StartupCheckboxList.Items"),
            resources.GetString("StartupCheckboxList.Items1")});
            resources.ApplyResources(this.StartupCheckboxList, "StartupCheckboxList");
            this.StartupCheckboxList.Name = "StartupCheckboxList";
            // 
            // StartupLabel
            // 
            resources.ApplyResources(this.StartupLabel, "StartupLabel");
            this.StartupLabel.Name = "StartupLabel";
            // 
            // ApplyButton
            // 
            resources.ApplyResources(this.ApplyButton, "ApplyButton");
            this.ApplyButton.Name = "ApplyButton";
            this.ApplyButton.UseVisualStyleBackColor = true;
            this.ApplyButton.Click += new System.EventHandler(this.Apply_Click);
            // 
            // ClosePerefencesButton
            // 
            this.ClosePerefencesButton.DialogResult = System.Windows.Forms.DialogResult.Cancel;
            resources.ApplyResources(this.ClosePerefencesButton, "ClosePerefencesButton");
            this.ClosePerefencesButton.Name = "ClosePerefencesButton";
            this.ClosePerefencesButton.UseVisualStyleBackColor = true;
            this.ClosePerefencesButton.Click += new System.EventHandler(this.Cancel_Click);
            // 
            // BrowserChoice
            // 
            this.BrowserChoice.FormattingEnabled = true;
            resources.ApplyResources(this.BrowserChoice, "BrowserChoice");
            this.BrowserChoice.Name = "BrowserChoice";
            // 
            // BrowserLabel
            // 
            resources.ApplyResources(this.BrowserLabel, "BrowserLabel");
            this.BrowserLabel.Name = "BrowserLabel";
            // 
            // PreferencesWindow
            // 
            this.AcceptButton = this.ApplyButton;
            resources.ApplyResources(this, "$this");
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.CancelButton = this.ClosePerefencesButton;
            this.Controls.Add(this.BrowserLabel);
            this.Controls.Add(this.BrowserChoice);
            this.Controls.Add(this.ClosePerefencesButton);
            this.Controls.Add(this.ApplyButton);
            this.Controls.Add(this.StartupLabel);
            this.Controls.Add(this.StartupCheckboxList);
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedSingle;
            this.MaximizeBox = false;
            this.MinimizeBox = false;
            this.Name = "PreferencesWindow";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.CheckedListBox StartupCheckboxList;
        private System.Windows.Forms.Label StartupLabel;
        private System.Windows.Forms.Button ApplyButton;
        private System.Windows.Forms.Button ClosePerefencesButton;
        private System.Windows.Forms.ComboBox BrowserChoice;
        private System.Windows.Forms.Label BrowserLabel;
    }
}