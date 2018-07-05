namespace QLTV
{
    partial class frmmain
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
            this.menuStrip1 = new System.Windows.Forms.MenuStrip();
            this.meTaikhoan = new System.Windows.Forms.ToolStripMenuItem();
            this.thoátToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.đọcGiảToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.sáchToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.phiếuMượnToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.thôngKêToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.grvdanhsach = new System.Windows.Forms.DataGridView();
            this.madocgia = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.grthongtin = new System.Windows.Forms.GroupBox();
            this.btnreset = new System.Windows.Forms.Button();
            this.btnxoa = new System.Windows.Forms.Button();
            this.btnsua = new System.Windows.Forms.Button();
            this.btnluu = new System.Windows.Forms.Button();
            this.cbbtrangthai = new System.Windows.Forms.ComboBox();
            this.txtpassword = new System.Windows.Forms.TextBox();
            this.dtpngaylapthe = new System.Windows.Forms.DateTimePicker();
            this.txtdiachi = new System.Windows.Forms.TextBox();
            this.cbbkhoa = new System.Windows.Forms.ComboBox();
            this.rdbnu = new System.Windows.Forms.RadioButton();
            this.rdbnam = new System.Windows.Forms.RadioButton();
            this.dtpngaysinh = new System.Windows.Forms.DateTimePicker();
            this.txthoten = new System.Windows.Forms.TextBox();
            this.txtmadocgia = new System.Windows.Forms.TextBox();
            this.label9 = new System.Windows.Forms.Label();
            this.label8 = new System.Windows.Forms.Label();
            this.label7 = new System.Windows.Forms.Label();
            this.label6 = new System.Windows.Forms.Label();
            this.label5 = new System.Windows.Forms.Label();
            this.label4 = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.label1 = new System.Windows.Forms.Label();
            this.menuStrip1.SuspendLayout();
            this.groupBox1.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.grvdanhsach)).BeginInit();
            this.grthongtin.SuspendLayout();
            this.SuspendLayout();
            // 
            // menuStrip1
            // 
            this.menuStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.meTaikhoan,
            this.thoátToolStripMenuItem,
            this.đọcGiảToolStripMenuItem,
            this.sáchToolStripMenuItem,
            this.phiếuMượnToolStripMenuItem,
            this.thôngKêToolStripMenuItem});
            this.menuStrip1.Location = new System.Drawing.Point(0, 0);
            this.menuStrip1.Name = "menuStrip1";
            this.menuStrip1.Size = new System.Drawing.Size(1121, 24);
            this.menuStrip1.TabIndex = 0;
            this.menuStrip1.Text = "menuStrip1";
            // 
            // meTaikhoan
            // 
            this.meTaikhoan.Name = "meTaikhoan";
            this.meTaikhoan.Size = new System.Drawing.Size(71, 20);
            this.meTaikhoan.Text = "Tài Khoản";
            // 
            // thoátToolStripMenuItem
            // 
            this.thoátToolStripMenuItem.Name = "thoátToolStripMenuItem";
            this.thoátToolStripMenuItem.Size = new System.Drawing.Size(50, 20);
            this.thoátToolStripMenuItem.Text = "Thoát";
            // 
            // đọcGiảToolStripMenuItem
            // 
            this.đọcGiảToolStripMenuItem.Name = "đọcGiảToolStripMenuItem";
            this.đọcGiảToolStripMenuItem.Size = new System.Drawing.Size(59, 20);
            this.đọcGiảToolStripMenuItem.Text = "Đọc giả";
            // 
            // sáchToolStripMenuItem
            // 
            this.sáchToolStripMenuItem.Name = "sáchToolStripMenuItem";
            this.sáchToolStripMenuItem.Size = new System.Drawing.Size(44, 20);
            this.sáchToolStripMenuItem.Text = "Sách";
            // 
            // phiếuMượnToolStripMenuItem
            // 
            this.phiếuMượnToolStripMenuItem.Name = "phiếuMượnToolStripMenuItem";
            this.phiếuMượnToolStripMenuItem.Size = new System.Drawing.Size(84, 20);
            this.phiếuMượnToolStripMenuItem.Text = "Phiếu mượn";
            // 
            // thôngKêToolStripMenuItem
            // 
            this.thôngKêToolStripMenuItem.Name = "thôngKêToolStripMenuItem";
            this.thôngKêToolStripMenuItem.Size = new System.Drawing.Size(69, 20);
            this.thôngKêToolStripMenuItem.Text = "Thông kê";
            // 
            // groupBox1
            // 
            this.groupBox1.Controls.Add(this.grvdanhsach);
            this.groupBox1.Location = new System.Drawing.Point(0, 290);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Size = new System.Drawing.Size(1121, 336);
            this.groupBox1.TabIndex = 1;
            this.groupBox1.TabStop = false;
            this.groupBox1.Text = "grouphienthi";
            // 
            // grvdanhsach
            // 
            this.grvdanhsach.AllowUserToOrderColumns = true;
            this.grvdanhsach.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.grvdanhsach.Columns.AddRange(new System.Windows.Forms.DataGridViewColumn[] {
            this.madocgia});
            this.grvdanhsach.Dock = System.Windows.Forms.DockStyle.Fill;
            this.grvdanhsach.Location = new System.Drawing.Point(3, 16);
            this.grvdanhsach.Name = "grvdanhsach";
            this.grvdanhsach.RowHeadersVisible = false;
            this.grvdanhsach.Size = new System.Drawing.Size(1115, 317);
            this.grvdanhsach.TabIndex = 0;
            this.grvdanhsach.CellClick += new System.Windows.Forms.DataGridViewCellEventHandler(this.grvdanhsach_CellClick);
            // 
            // madocgia
            // 
            this.madocgia.DataPropertyName = "madocgia";
            this.madocgia.HeaderText = "Mã Đọc Giả";
            this.madocgia.Name = "madocgia";
            this.madocgia.Resizable = System.Windows.Forms.DataGridViewTriState.True;
            // 
            // grthongtin
            // 
            this.grthongtin.Controls.Add(this.btnreset);
            this.grthongtin.Controls.Add(this.btnxoa);
            this.grthongtin.Controls.Add(this.btnsua);
            this.grthongtin.Controls.Add(this.btnluu);
            this.grthongtin.Controls.Add(this.cbbtrangthai);
            this.grthongtin.Controls.Add(this.txtpassword);
            this.grthongtin.Controls.Add(this.dtpngaylapthe);
            this.grthongtin.Controls.Add(this.txtdiachi);
            this.grthongtin.Controls.Add(this.cbbkhoa);
            this.grthongtin.Controls.Add(this.rdbnu);
            this.grthongtin.Controls.Add(this.rdbnam);
            this.grthongtin.Controls.Add(this.dtpngaysinh);
            this.grthongtin.Controls.Add(this.txthoten);
            this.grthongtin.Controls.Add(this.txtmadocgia);
            this.grthongtin.Controls.Add(this.label9);
            this.grthongtin.Controls.Add(this.label8);
            this.grthongtin.Controls.Add(this.label7);
            this.grthongtin.Controls.Add(this.label6);
            this.grthongtin.Controls.Add(this.label5);
            this.grthongtin.Controls.Add(this.label4);
            this.grthongtin.Controls.Add(this.label3);
            this.grthongtin.Controls.Add(this.label2);
            this.grthongtin.Controls.Add(this.label1);
            this.grthongtin.Location = new System.Drawing.Point(0, 27);
            this.grthongtin.Name = "grthongtin";
            this.grthongtin.Size = new System.Drawing.Size(1118, 273);
            this.grthongtin.TabIndex = 2;
            this.grthongtin.TabStop = false;
            this.grthongtin.Text = "Thông tin";
            // 
            // btnreset
            // 
            this.btnreset.Location = new System.Drawing.Point(673, 196);
            this.btnreset.Name = "btnreset";
            this.btnreset.Size = new System.Drawing.Size(104, 46);
            this.btnreset.TabIndex = 22;
            this.btnreset.Text = "Reset";
            this.btnreset.UseVisualStyleBackColor = true;
            this.btnreset.Click += new System.EventHandler(this.btnreset_Click);
            // 
            // btnxoa
            // 
            this.btnxoa.Location = new System.Drawing.Point(449, 196);
            this.btnxoa.Name = "btnxoa";
            this.btnxoa.Size = new System.Drawing.Size(104, 46);
            this.btnxoa.TabIndex = 21;
            this.btnxoa.Text = "Xóa";
            this.btnxoa.UseVisualStyleBackColor = true;
            this.btnxoa.Click += new System.EventHandler(this.btnxoa_Click);
            // 
            // btnsua
            // 
            this.btnsua.Location = new System.Drawing.Point(248, 196);
            this.btnsua.Name = "btnsua";
            this.btnsua.Size = new System.Drawing.Size(104, 46);
            this.btnsua.TabIndex = 20;
            this.btnsua.Text = "Sửa";
            this.btnsua.UseVisualStyleBackColor = true;
            this.btnsua.Click += new System.EventHandler(this.btnsua_Click);
            // 
            // btnluu
            // 
            this.btnluu.Location = new System.Drawing.Point(49, 196);
            this.btnluu.Name = "btnluu";
            this.btnluu.Size = new System.Drawing.Size(104, 46);
            this.btnluu.TabIndex = 19;
            this.btnluu.Text = "Thêm";
            this.btnluu.UseVisualStyleBackColor = true;
            this.btnluu.Click += new System.EventHandler(this.btnluu_Click);
            // 
            // cbbtrangthai
            // 
            this.cbbtrangthai.FormattingEnabled = true;
            this.cbbtrangthai.Items.AddRange(new object[] {
            "ON",
            "OFF"});
            this.cbbtrangthai.Location = new System.Drawing.Point(731, 32);
            this.cbbtrangthai.Name = "cbbtrangthai";
            this.cbbtrangthai.Size = new System.Drawing.Size(208, 21);
            this.cbbtrangthai.TabIndex = 18;
            // 
            // txtpassword
            // 
            this.txtpassword.Location = new System.Drawing.Point(431, 139);
            this.txtpassword.Name = "txtpassword";
            this.txtpassword.PasswordChar = '*';
            this.txtpassword.Size = new System.Drawing.Size(208, 20);
            this.txtpassword.TabIndex = 17;
            // 
            // dtpngaylapthe
            // 
            this.dtpngaylapthe.Format = System.Windows.Forms.DateTimePickerFormat.Short;
            this.dtpngaylapthe.Location = new System.Drawing.Point(431, 99);
            this.dtpngaylapthe.Name = "dtpngaylapthe";
            this.dtpngaylapthe.Size = new System.Drawing.Size(208, 20);
            this.dtpngaylapthe.TabIndex = 16;
            // 
            // txtdiachi
            // 
            this.txtdiachi.Location = new System.Drawing.Point(431, 66);
            this.txtdiachi.Name = "txtdiachi";
            this.txtdiachi.Size = new System.Drawing.Size(208, 20);
            this.txtdiachi.TabIndex = 15;
            // 
            // cbbkhoa
            // 
            this.cbbkhoa.FormattingEnabled = true;
            this.cbbkhoa.Location = new System.Drawing.Point(431, 32);
            this.cbbkhoa.Name = "cbbkhoa";
            this.cbbkhoa.Size = new System.Drawing.Size(208, 21);
            this.cbbkhoa.TabIndex = 14;
            // 
            // rdbnu
            // 
            this.rdbnu.AutoSize = true;
            this.rdbnu.Location = new System.Drawing.Point(185, 139);
            this.rdbnu.Name = "rdbnu";
            this.rdbnu.Size = new System.Drawing.Size(39, 17);
            this.rdbnu.TabIndex = 13;
            this.rdbnu.TabStop = true;
            this.rdbnu.Text = "Nữ";
            this.rdbnu.UseVisualStyleBackColor = true;
            // 
            // rdbnam
            // 
            this.rdbnam.AutoSize = true;
            this.rdbnam.Location = new System.Drawing.Point(106, 139);
            this.rdbnam.Name = "rdbnam";
            this.rdbnam.Size = new System.Drawing.Size(47, 17);
            this.rdbnam.TabIndex = 12;
            this.rdbnam.TabStop = true;
            this.rdbnam.Text = "Nam";
            this.rdbnam.UseVisualStyleBackColor = true;
            // 
            // dtpngaysinh
            // 
            this.dtpngaysinh.Format = System.Windows.Forms.DateTimePickerFormat.Short;
            this.dtpngaysinh.Location = new System.Drawing.Point(106, 106);
            this.dtpngaysinh.Name = "dtpngaysinh";
            this.dtpngaysinh.Size = new System.Drawing.Size(208, 20);
            this.dtpngaysinh.TabIndex = 11;
            // 
            // txthoten
            // 
            this.txthoten.Location = new System.Drawing.Point(106, 69);
            this.txthoten.Name = "txthoten";
            this.txthoten.Size = new System.Drawing.Size(208, 20);
            this.txthoten.TabIndex = 10;
            // 
            // txtmadocgia
            // 
            this.txtmadocgia.Location = new System.Drawing.Point(106, 35);
            this.txtmadocgia.Name = "txtmadocgia";
            this.txtmadocgia.Size = new System.Drawing.Size(208, 20);
            this.txtmadocgia.TabIndex = 9;
            // 
            // label9
            // 
            this.label9.AutoSize = true;
            this.label9.Location = new System.Drawing.Point(670, 35);
            this.label9.Name = "label9";
            this.label9.Size = new System.Drawing.Size(55, 13);
            this.label9.TabIndex = 8;
            this.label9.Text = "Trạng thái";
            // 
            // label8
            // 
            this.label8.AutoSize = true;
            this.label8.Location = new System.Drawing.Point(345, 144);
            this.label8.Name = "label8";
            this.label8.Size = new System.Drawing.Size(52, 13);
            this.label8.TabIndex = 7;
            this.label8.Text = "Mật khẩu";
            // 
            // label7
            // 
            this.label7.AutoSize = true;
            this.label7.Location = new System.Drawing.Point(345, 106);
            this.label7.Name = "label7";
            this.label7.Size = new System.Drawing.Size(67, 13);
            this.label7.TabIndex = 6;
            this.label7.Text = "Ngày lập thẻ";
            // 
            // label6
            // 
            this.label6.AutoSize = true;
            this.label6.Location = new System.Drawing.Point(348, 68);
            this.label6.Name = "label6";
            this.label6.Size = new System.Drawing.Size(40, 13);
            this.label6.TabIndex = 5;
            this.label6.Text = "Đia chỉ";
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Location = new System.Drawing.Point(345, 35);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(32, 13);
            this.label5.TabIndex = 4;
            this.label5.Text = "Khoa";
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Location = new System.Drawing.Point(43, 144);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(50, 13);
            this.label4.TabIndex = 3;
            this.label4.Text = "Giới tính ";
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(39, 106);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(54, 13);
            this.label3.TabIndex = 2;
            this.label3.Text = "Ngày sinh";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(39, 69);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(39, 13);
            this.label2.TabIndex = 1;
            this.label2.Text = "Họ tên";
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(39, 35);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(61, 13);
            this.label1.TabIndex = 0;
            this.label1.Text = "Mã đọc giả";
            // 
            // frmmain
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(1121, 638);
            this.Controls.Add(this.grthongtin);
            this.Controls.Add(this.groupBox1);
            this.Controls.Add(this.menuStrip1);
            this.MainMenuStrip = this.menuStrip1;
            this.Name = "frmmain";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "Quản Lý Thư Viện";
            this.Load += new System.EventHandler(this.frmmain_Load);
            this.menuStrip1.ResumeLayout(false);
            this.menuStrip1.PerformLayout();
            this.groupBox1.ResumeLayout(false);
            ((System.ComponentModel.ISupportInitialize)(this.grvdanhsach)).EndInit();
            this.grthongtin.ResumeLayout(false);
            this.grthongtin.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.MenuStrip menuStrip1;
        private System.Windows.Forms.ToolStripMenuItem meTaikhoan;
        private System.Windows.Forms.ToolStripMenuItem thoátToolStripMenuItem;
        private System.Windows.Forms.GroupBox groupBox1;
        private System.Windows.Forms.DataGridView grvdanhsach;
        private System.Windows.Forms.ToolStripMenuItem đọcGiảToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem sáchToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem phiếuMượnToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem thôngKêToolStripMenuItem;
        private System.Windows.Forms.GroupBox grthongtin;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label9;
        private System.Windows.Forms.Label label8;
        private System.Windows.Forms.Label label7;
        private System.Windows.Forms.Label label6;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.RadioButton rdbnam;
        private System.Windows.Forms.DateTimePicker dtpngaysinh;
        private System.Windows.Forms.TextBox txthoten;
        private System.Windows.Forms.TextBox txtmadocgia;
        private System.Windows.Forms.Button btnreset;
        private System.Windows.Forms.Button btnxoa;
        private System.Windows.Forms.Button btnsua;
        private System.Windows.Forms.Button btnluu;
        private System.Windows.Forms.ComboBox cbbtrangthai;
        private System.Windows.Forms.TextBox txtpassword;
        private System.Windows.Forms.DateTimePicker dtpngaylapthe;
        private System.Windows.Forms.TextBox txtdiachi;
        private System.Windows.Forms.ComboBox cbbkhoa;
        private System.Windows.Forms.RadioButton rdbnu;
        private System.Windows.Forms.DataGridViewTextBoxColumn madocgia;
    }
}