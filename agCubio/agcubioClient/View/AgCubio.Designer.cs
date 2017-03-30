namespace View
{
    partial class clientWindow
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
            this.inputBox = new System.Windows.Forms.GroupBox();
            this.submitButton = new System.Windows.Forms.Button();
            this.serverLabel = new System.Windows.Forms.Label();
            this.nameLabel = new System.Windows.Forms.Label();
            this.serverTextBox = new System.Windows.Forms.TextBox();
            this.nameTextBox = new System.Windows.Forms.TextBox();
            this.statusPanel = new System.Windows.Forms.GroupBox();
            this.massBox = new System.Windows.Forms.TextBox();
            this.MassLabel = new System.Windows.Forms.Label();
            this.fpsBox = new System.Windows.Forms.TextBox();
            this.fpsLabel = new System.Windows.Forms.Label();
            this.connectionLabel = new System.Windows.Forms.Label();
            this.connectedText = new System.Windows.Forms.TextBox();
            this.FrameTimer = new System.Windows.Forms.Timer(this.components);
            this.inputBox.SuspendLayout();
            this.statusPanel.SuspendLayout();
            this.SuspendLayout();
            // 
            // inputBox
            // 
            this.inputBox.BackColor = System.Drawing.SystemColors.ControlDark;
            this.inputBox.Controls.Add(this.submitButton);
            this.inputBox.Controls.Add(this.serverLabel);
            this.inputBox.Controls.Add(this.nameLabel);
            this.inputBox.Controls.Add(this.serverTextBox);
            this.inputBox.Controls.Add(this.nameTextBox);
            this.inputBox.Location = new System.Drawing.Point(312, 251);
            this.inputBox.Name = "inputBox";
            this.inputBox.Size = new System.Drawing.Size(350, 196);
            this.inputBox.TabIndex = 0;
            this.inputBox.TabStop = false;
            // 
            // submitButton
            // 
            this.submitButton.Location = new System.Drawing.Point(141, 145);
            this.submitButton.Name = "submitButton";
            this.submitButton.Size = new System.Drawing.Size(75, 23);
            this.submitButton.TabIndex = 4;
            this.submitButton.Text = "Submit";
            this.submitButton.UseVisualStyleBackColor = true;
            this.submitButton.Click += new System.EventHandler(this.submitButton_Click);
            // 
            // serverLabel
            // 
            this.serverLabel.AutoSize = true;
            this.serverLabel.Location = new System.Drawing.Point(64, 95);
            this.serverLabel.Name = "serverLabel";
            this.serverLabel.Size = new System.Drawing.Size(38, 13);
            this.serverLabel.TabIndex = 3;
            this.serverLabel.Text = "Server";
            // 
            // nameLabel
            // 
            this.nameLabel.AutoSize = true;
            this.nameLabel.Location = new System.Drawing.Point(64, 42);
            this.nameLabel.Name = "nameLabel";
            this.nameLabel.Size = new System.Drawing.Size(35, 13);
            this.nameLabel.TabIndex = 2;
            this.nameLabel.Text = "Name";
            // 
            // serverTextBox
            // 
            this.serverTextBox.Location = new System.Drawing.Point(141, 92);
            this.serverTextBox.Name = "serverTextBox";
            this.serverTextBox.Size = new System.Drawing.Size(140, 20);
            this.serverTextBox.TabIndex = 1;
            this.serverTextBox.Text = "localhost";
            // 
            // nameTextBox
            // 
            this.nameTextBox.Location = new System.Drawing.Point(141, 39);
            this.nameTextBox.Name = "nameTextBox";
            this.nameTextBox.Size = new System.Drawing.Size(143, 20);
            this.nameTextBox.TabIndex = 0;
            // 
            // statusPanel
            // 
            this.statusPanel.BackColor = System.Drawing.SystemColors.ControlLight;
            this.statusPanel.Controls.Add(this.massBox);
            this.statusPanel.Controls.Add(this.MassLabel);
            this.statusPanel.Controls.Add(this.fpsBox);
            this.statusPanel.Controls.Add(this.fpsLabel);
            this.statusPanel.Controls.Add(this.connectionLabel);
            this.statusPanel.Controls.Add(this.connectedText);
            this.statusPanel.Location = new System.Drawing.Point(787, 0);
            this.statusPanel.Name = "statusPanel";
            this.statusPanel.Size = new System.Drawing.Size(197, 198);
            this.statusPanel.TabIndex = 1;
            this.statusPanel.TabStop = false;
            this.statusPanel.Text = "Status Panel";
            // 
            // massBox
            // 
            this.massBox.Location = new System.Drawing.Point(97, 87);
            this.massBox.Name = "massBox";
            this.massBox.ReadOnly = true;
            this.massBox.Size = new System.Drawing.Size(88, 20);
            this.massBox.TabIndex = 5;
            this.massBox.Text = "0";
            // 
            // MassLabel
            // 
            this.MassLabel.AutoSize = true;
            this.MassLabel.Location = new System.Drawing.Point(24, 90);
            this.MassLabel.Name = "MassLabel";
            this.MassLabel.Size = new System.Drawing.Size(32, 13);
            this.MassLabel.TabIndex = 4;
            this.MassLabel.Text = "Mass";
            // 
            // fpsBox
            // 
            this.fpsBox.Location = new System.Drawing.Point(98, 58);
            this.fpsBox.Name = "fpsBox";
            this.fpsBox.ReadOnly = true;
            this.fpsBox.Size = new System.Drawing.Size(87, 20);
            this.fpsBox.TabIndex = 3;
            // 
            // fpsLabel
            // 
            this.fpsLabel.AutoSize = true;
            this.fpsLabel.Location = new System.Drawing.Point(24, 61);
            this.fpsLabel.Name = "fpsLabel";
            this.fpsLabel.Size = new System.Drawing.Size(30, 13);
            this.fpsLabel.TabIndex = 2;
            this.fpsLabel.Text = "FPS:";
            // 
            // connectionLabel
            // 
            this.connectionLabel.AutoSize = true;
            this.connectionLabel.Location = new System.Drawing.Point(21, 33);
            this.connectionLabel.Name = "connectionLabel";
            this.connectionLabel.Size = new System.Drawing.Size(71, 13);
            this.connectionLabel.TabIndex = 1;
            this.connectionLabel.Text = "Connectivity: ";
            // 
            // connectedText
            // 
            this.connectedText.Enabled = false;
            this.connectedText.Location = new System.Drawing.Point(98, 30);
            this.connectedText.Name = "connectedText";
            this.connectedText.Size = new System.Drawing.Size(87, 20);
            this.connectedText.TabIndex = 0;
            // 
            // clientWindow
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.SystemColors.Control;
            this.ClientSize = new System.Drawing.Size(984, 729);
            this.Controls.Add(this.statusPanel);
            this.Controls.Add(this.inputBox);
            this.DoubleBuffered = true;
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.Fixed3D;
            this.Name = "clientWindow";
            this.SizeGripStyle = System.Windows.Forms.SizeGripStyle.Hide;
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "AgCubio";
            this.KeyDown += new System.Windows.Forms.KeyEventHandler(this.clientWindow_KeyDown);
            this.inputBox.ResumeLayout(false);
            this.inputBox.PerformLayout();
            this.statusPanel.ResumeLayout(false);
            this.statusPanel.PerformLayout();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.GroupBox inputBox;
        private System.Windows.Forms.Button submitButton;
        private System.Windows.Forms.Label serverLabel;
        private System.Windows.Forms.Label nameLabel;
        private System.Windows.Forms.TextBox serverTextBox;
        private System.Windows.Forms.TextBox nameTextBox;
        private System.Windows.Forms.GroupBox statusPanel;
        private System.Windows.Forms.TextBox connectedText;
        private System.Windows.Forms.Label connectionLabel;
        private System.Windows.Forms.Timer FrameTimer;
        private System.Windows.Forms.TextBox massBox;
        private System.Windows.Forms.Label MassLabel;
        private System.Windows.Forms.TextBox fpsBox;
        private System.Windows.Forms.Label fpsLabel;
    }
}

