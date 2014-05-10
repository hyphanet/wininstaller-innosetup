namespace FreenetTray
{
    partial class CommandsMenu
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
            this.components = new System.ComponentModel.Container();
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(CommandsMenu));
            this.trayIcon = new System.Windows.Forms.NotifyIcon(this.components);
            this.contextMenu = new System.Windows.Forms.ContextMenuStrip(this.components);
            this.openFreenetMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.toolStripSeparator2 = new System.Windows.Forms.ToolStripSeparator();
            this.startFreenetMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.stopFreenetMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.viewLogsMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.toolStripSeparator1 = new System.Windows.Forms.ToolStripSeparator();
            this.preferencesMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.hideIconMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.exitMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.contextMenu.SuspendLayout();
            this.SuspendLayout();
            // 
            // trayIcon
            // 
            resources.ApplyResources(this.trayIcon, "trayIcon");
            this.trayIcon.ContextMenuStrip = this.contextMenu;
            // 
            // contextMenu
            // 
            resources.ApplyResources(this.contextMenu, "contextMenu");
            this.contextMenu.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.openFreenetMenuItem,
            this.toolStripSeparator2,
            this.startFreenetMenuItem,
            this.stopFreenetMenuItem,
            this.viewLogsMenuItem,
            this.toolStripSeparator1,
            this.preferencesMenuItem,
            this.hideIconMenuItem,
            this.exitMenuItem});
            this.contextMenu.Name = "contextMenu";
            // 
            // openFreenetMenuItem
            // 
            resources.ApplyResources(this.openFreenetMenuItem, "openFreenetMenuItem");
            this.openFreenetMenuItem.Name = "openFreenetMenuItem";
            this.openFreenetMenuItem.Click += new System.EventHandler(this.openFreenetMenuItem_Click);
            // 
            // toolStripSeparator2
            // 
            resources.ApplyResources(this.toolStripSeparator2, "toolStripSeparator2");
            this.toolStripSeparator2.Name = "toolStripSeparator2";
            // 
            // startFreenetMenuItem
            // 
            resources.ApplyResources(this.startFreenetMenuItem, "startFreenetMenuItem");
            this.startFreenetMenuItem.Name = "startFreenetMenuItem";
            this.startFreenetMenuItem.Click += new System.EventHandler(this.startFreenetMenuItem_Click);
            // 
            // stopFreenetMenuItem
            // 
            resources.ApplyResources(this.stopFreenetMenuItem, "stopFreenetMenuItem");
            this.stopFreenetMenuItem.Name = "stopFreenetMenuItem";
            this.stopFreenetMenuItem.Click += new System.EventHandler(this.stopFreenetMenuItem_Click);
            // 
            // viewLogsMenuItem
            // 
            resources.ApplyResources(this.viewLogsMenuItem, "viewLogsMenuItem");
            this.viewLogsMenuItem.Name = "viewLogsMenuItem";
            this.viewLogsMenuItem.Click += new System.EventHandler(this.viewLogsMenuItem_Click);
            // 
            // toolStripSeparator1
            // 
            resources.ApplyResources(this.toolStripSeparator1, "toolStripSeparator1");
            this.toolStripSeparator1.Name = "toolStripSeparator1";
            // 
            // preferencesMenuItem
            // 
            resources.ApplyResources(this.preferencesMenuItem, "preferencesMenuItem");
            this.preferencesMenuItem.Name = "preferencesMenuItem";
            this.preferencesMenuItem.Click += new System.EventHandler(this.preferencesMenuItem_Click);
            // 
            // hideIconMenuItem
            // 
            resources.ApplyResources(this.hideIconMenuItem, "hideIconMenuItem");
            this.hideIconMenuItem.Name = "hideIconMenuItem";
            this.hideIconMenuItem.Click += new System.EventHandler(this.hideIconMenuItem_Click);
            // 
            // exitMenuItem
            // 
            resources.ApplyResources(this.exitMenuItem, "exitMenuItem");
            this.exitMenuItem.Name = "exitMenuItem";
            this.exitMenuItem.Click += new System.EventHandler(this.exitMenuItem_Click);
            // 
            // Form1
            // 
            resources.ApplyResources(this, "$this");
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedToolWindow;
            this.Name = "Form1";
            this.ShowInTaskbar = false;
            this.WindowState = System.Windows.Forms.FormWindowState.Minimized;
            this.contextMenu.ResumeLayout(false);
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.NotifyIcon trayIcon;
        private System.Windows.Forms.ContextMenuStrip contextMenu;
        private System.Windows.Forms.ToolStripMenuItem openFreenetMenuItem;
        private System.Windows.Forms.ToolStripSeparator toolStripSeparator2;
        private System.Windows.Forms.ToolStripMenuItem startFreenetMenuItem;
        private System.Windows.Forms.ToolStripMenuItem stopFreenetMenuItem;
        private System.Windows.Forms.ToolStripMenuItem viewLogsMenuItem;
        private System.Windows.Forms.ToolStripSeparator toolStripSeparator1;
        private System.Windows.Forms.ToolStripMenuItem exitMenuItem;
        private System.Windows.Forms.ToolStripMenuItem preferencesMenuItem;
        private System.Windows.Forms.ToolStripMenuItem hideIconMenuItem;
    }
}

