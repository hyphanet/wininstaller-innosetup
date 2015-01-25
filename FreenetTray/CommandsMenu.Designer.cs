using System;
using System.ComponentModel;
using System.Windows.Forms;

namespace FreenetTray
{
    partial class CommandsMenu
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private IContainer components = null;

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
            this.components = new Container();
            ComponentResourceManager resources = new ComponentResourceManager(typeof(CommandsMenu));
            this.trayIcon = new NotifyIcon(this.components);
            this.contextMenu = new ContextMenuStrip(this.components);
            this.openFreenetMenuItem = new ToolStripMenuItem();
            this.toolStripSeparator2 = new ToolStripSeparator();
            this.startFreenetMenuItem = new ToolStripMenuItem();
            this.stopFreenetMenuItem = new ToolStripMenuItem();
            this.viewLogsMenuItem = new ToolStripMenuItem();
            this.toolStripSeparator1 = new ToolStripSeparator();
            this.preferencesMenuItem = new ToolStripMenuItem();
            this.hideIconMenuItem = new ToolStripMenuItem();
            this.exitMenuItem = new ToolStripMenuItem();
            this.contextMenu.SuspendLayout();
            this.SuspendLayout();
            // 
            // trayIcon
            // 
            this.trayIcon.ContextMenuStrip = this.contextMenu;
            resources.ApplyResources(this.trayIcon, "trayIcon");
            this.trayIcon.MouseClick += new MouseEventHandler(this.trayIcon_MouseClick);
            // 
            // contextMenu
            // 
            this.contextMenu.Items.AddRange(new ToolStripItem[] {
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
            resources.ApplyResources(this.contextMenu, "contextMenu");
            // 
            // openFreenetMenuItem
            // 
            resources.ApplyResources(this.openFreenetMenuItem, "openFreenetMenuItem");
            this.openFreenetMenuItem.Name = "openFreenetMenuItem";
            this.openFreenetMenuItem.Click += new EventHandler(this.openFreenetMenuItem_Click);
            // 
            // toolStripSeparator2
            // 
            this.toolStripSeparator2.Name = "toolStripSeparator2";
            resources.ApplyResources(this.toolStripSeparator2, "toolStripSeparator2");
            // 
            // startFreenetMenuItem
            // 
            this.startFreenetMenuItem.Name = "startFreenetMenuItem";
            resources.ApplyResources(this.startFreenetMenuItem, "startFreenetMenuItem");
            this.startFreenetMenuItem.Click += new EventHandler(this.startFreenetMenuItem_Click);
            // 
            // stopFreenetMenuItem
            // 
            this.stopFreenetMenuItem.Name = "stopFreenetMenuItem";
            resources.ApplyResources(this.stopFreenetMenuItem, "stopFreenetMenuItem");
            this.stopFreenetMenuItem.Click += new EventHandler(this.stopFreenetMenuItem_Click);
            // 
            // viewLogsMenuItem
            // 
            this.viewLogsMenuItem.Name = "viewLogsMenuItem";
            resources.ApplyResources(this.viewLogsMenuItem, "viewLogsMenuItem");
            this.viewLogsMenuItem.Click += new EventHandler(this.viewLogsMenuItem_Click);
            // 
            // toolStripSeparator1
            // 
            this.toolStripSeparator1.Name = "toolStripSeparator1";
            resources.ApplyResources(this.toolStripSeparator1, "toolStripSeparator1");
            // 
            // preferencesMenuItem
            // 
            this.preferencesMenuItem.Name = "preferencesMenuItem";
            resources.ApplyResources(this.preferencesMenuItem, "preferencesMenuItem");
            this.preferencesMenuItem.Click += new EventHandler(this.preferencesMenuItem_Click);
            // 
            // hideIconMenuItem
            // 
            this.hideIconMenuItem.Name = "hideIconMenuItem";
            resources.ApplyResources(this.hideIconMenuItem, "hideIconMenuItem");
            this.hideIconMenuItem.Click += new EventHandler(this.hideIconMenuItem_Click);
            // 
            // exitMenuItem
            // 
            this.exitMenuItem.Name = "exitMenuItem";
            resources.ApplyResources(this.exitMenuItem, "exitMenuItem");
            this.exitMenuItem.Click += new EventHandler(this.exitMenuItem_Click);
            // 
            // CommandsMenu
            // 
            resources.ApplyResources(this, "$this");
            this.AutoScaleMode = AutoScaleMode.Font;
            this.FormBorderStyle = FormBorderStyle.FixedToolWindow;
            this.Name = "CommandsMenu";
            this.ShowInTaskbar = false;
            this.WindowState = FormWindowState.Minimized;
            this.Load += new EventHandler(this.CommandsMenu_Load);
            this.contextMenu.ResumeLayout(false);
            this.ResumeLayout(false);

        }

        #endregion

        private NotifyIcon trayIcon;
        private ContextMenuStrip contextMenu;
        private ToolStripMenuItem openFreenetMenuItem;
        private ToolStripSeparator toolStripSeparator2;
        private ToolStripMenuItem startFreenetMenuItem;
        private ToolStripMenuItem stopFreenetMenuItem;
        private ToolStripMenuItem viewLogsMenuItem;
        private ToolStripSeparator toolStripSeparator1;
        private ToolStripMenuItem exitMenuItem;
        private ToolStripMenuItem preferencesMenuItem;
        private ToolStripMenuItem hideIconMenuItem;
    }
}

