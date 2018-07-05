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
    public partial class frmmain : Form
    {
        DBConnection db = new DBConnection();
        DataTable dt;
        public frmmain()
        {
            InitializeComponent();
        }

        private void frmmain_Load(object sender, EventArgs e)
        {
            meTaikhoan.Text = frmdangnhap.manhanvien;
            dt = db.getData("SELECT * FROM DOCGIA");
            grvdanhsach.DataSource = dt;

            dt = db.getData("SELECT makhoa,tenkhoa FROM KHOA");
            cbbkhoa.DataSource = dt;
            cbbkhoa.DisplayMember = "tenkhoa";
            cbbkhoa.ValueMember = "makhoa";
        }

        //chongioitinh
        public string chongt()
        {
            string gt;
            if (rdbnam.Checked == true)
            {
                return gt = rdbnam.Text;
            }
            else
            {
                return gt = rdbnu.Text;
            }
        }
        private void btnsua_Click(object sender, EventArgs e)
        {
            string sql = @"UPDATE DOCGIA SET hoten=N'"+txthoten.Text+"',ngaysinh='"+dtpngaysinh.Text+"',gioitinh=N'"+chongt()+"',makhoa='"+cbbkhoa.SelectedValue.ToString()+"',diachi=N'"+txtdiachi.Text+"',ngaylapthe='"+dtpngaylapthe.Text+"',matkhau='"+txtpassword.Text+"',trangthai='"+cbbtrangthai.Text+"' WHERE  madocgia='"+txtmadocgia.Text+"'";
            int status = db.ExcuteNonQuery(sql);
            if (status > 0)
            {
                MessageBox.Show("Sửa thành công", "Thông báo", MessageBoxButtons.OKCancel, MessageBoxIcon.Information);
                frmmain_Load(sender, e);
            }
            else
            {
                MessageBox.Show("Sửa thất bại", "Thông báo", MessageBoxButtons.OKCancel, MessageBoxIcon.Information);
            } 
        }

       


        //kiem tra gioi tinh
        public int ktgioitinh(string gt)
        {
            if (gt == "Nam")
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }

        private void grvdanhsach_CellClick(object sender, DataGridViewCellEventArgs e)
        {
            txtmadocgia.ReadOnly = true;
            DataGridViewRow row = new DataGridViewRow();
            row = grvdanhsach.Rows[e.RowIndex];
            txtmadocgia.Text = row.Cells[0].Value.ToString();
            txthoten.Text = row.Cells[1].Value.ToString();
            dtpngaysinh.Text = row.Cells[2].Value.ToString();
            if (ktgioitinh(row.Cells[3].Value.ToString()) == 1)
            {
                rdbnam.Checked = true;
            }
            else
            {
                rdbnu.Checked = true;
            }
            cbbkhoa.SelectedValue = row.Cells[4].Value.ToString();
            txtdiachi.Text = row.Cells[5].Value.ToString();
            dtpngaylapthe.Text = row.Cells[6].Value.ToString();
            txtpassword.Text = row.Cells[7].Value.ToString();
            cbbtrangthai.Text = row.Cells[8].Value.ToString();
        }

        private void btnreset_Click(object sender, EventArgs e)
        {
            txtmadocgia.ReadOnly = false;
            txtmadocgia.ResetText();
            txthoten.ResetText();
            dtpngaysinh.ResetText();
            dtpngaylapthe.ResetText();
            txtdiachi.ResetText();
            txtpassword.ResetText();
            cbbkhoa.ResetText();
            cbbkhoa.ResetText();
        }

        private void btnluu_Click(object sender, EventArgs e)
        {
            string sql = "INSERT INTO DOCGIA VALUES(N'"+txtmadocgia.Text+"',N'"+txthoten.Text+"','"+DateTime.Parse(dtpngaysinh.Text).ToString("yyyy/MM/dd") + "',N'"+chongt()+"','" + cbbkhoa.SelectedValue.ToString() + "','"+txtdiachi.Text+"','"+DateTime.Parse(dtpngaylapthe.Text).ToString("yyyy/MM/dd")+"','"+txtpassword.Text+"','"+cbbtrangthai.Text+"')";
            int status = db.ExcuteNonQuery(sql);
            if (status > 0)
            {
                MessageBox.Show("Thêm thành công", "Thông báo", MessageBoxButtons.OKCancel, MessageBoxIcon.Information);
                frmmain_Load(sender, e);
            }
            else
            {
                MessageBox.Show("Thêm thất bại", "Thông báo", MessageBoxButtons.OKCancel, MessageBoxIcon.Information);             
            }
        }

        private void btnxoa_Click(object sender, EventArgs e)
        {
            string sql = "DELETE FROM DOCGIA WHERE madocgia='" + txtmadocgia.Text + "'";
            int status = db.ExcuteNonQuery(sql);
            if (status > 0)
            {
                MessageBox.Show("Xóa thành công", "Thông báo", MessageBoxButtons.OKCancel, MessageBoxIcon.Information);
                frmmain_Load(sender, e);
            }
            else
            {
                MessageBox.Show("Xóa thất bại", "Thông báo", MessageBoxButtons.OKCancel, MessageBoxIcon.Information);
            }
        }
    }
}
