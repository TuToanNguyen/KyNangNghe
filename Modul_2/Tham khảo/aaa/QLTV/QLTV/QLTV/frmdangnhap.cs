using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace QLTV
{
    public partial class frmdangnhap : Form
    {
        public static string manhanvien;
        DBConnection db = new DBConnection();
        public frmdangnhap()
        {
            InitializeComponent();
        }

        private void btndangnhap_Click(object sender, EventArgs e)
        {
            string sql = @"SELECT madocgia AS ma, 'docgia' AS 'loai' FROM DOCGIA dg 
            WHERE dg.madocgia='"+txttaikhoan.Text+"' AND dg.matkhau='"+txtmatkhau.Text+"' UNION SELECT manhanvien AS ma, 'nhanvien' AS 'loai' FROM NHANVIEN nv WHERE nv.manhanvien='"+txttaikhoan.Text+"' AND nv.matkhau='"+txtmatkhau.Text+"'";
            
            DataTable dt = db.getData(sql);
            if (dt.Rows.Count>0)
            {
                manhanvien = dt.Rows[0][0].ToString();
                MessageBox.Show("Đăng nhập thành công", "Thông báo", MessageBoxButtons.OKCancel, MessageBoxIcon.Information);
                frmmain fm = new frmmain();
                this.Hide();
                fm.ShowDialog();
            }
            else
            {
                MessageBox.Show("Đăng nhập thất bại", "Thông báo", MessageBoxButtons.OKCancel, MessageBoxIcon.Information);
            }

        }
    }
}
