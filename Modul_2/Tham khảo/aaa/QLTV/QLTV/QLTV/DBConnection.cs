using System;
using System.Collections.Generic;
using System.Data;
using System.Data.SqlClient;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace QLTV
{
    class DBConnection
    {
        SqlConnection con;
        SqlCommand cm;
        SqlDataAdapter da;
        DataTable dt;

        public void Connect()
        {
            if (con == null)
            {
                con = new SqlConnection(@"Data Source=DESKTOP-4S7OV54\SQLEXPRESS;Initial Catalog=QLTV;User ID=sa;Password=Nguyentai");
            }
            if (con.State == ConnectionState.Closed)
            {
                con.Open();
            }
        }
        public void Disconect()
        {
            if (con != null && con.State == ConnectionState.Open)
            {
                con.Close();
            }
        }
        //select
        public DataTable getData(string sql)
        {
            Connect();
            da = new SqlDataAdapter(sql, con);
            dt = new DataTable();
            da.Fill(dt);
            Disconect();
            return dt;
        }
        //insert+update
        public int ExcuteNonQuery(string sql)
        {
            Connect();
            cm = new SqlCommand(sql, con);
            int status = cm.ExecuteNonQuery();
            Disconect();
            return status;
        }
    }
}
