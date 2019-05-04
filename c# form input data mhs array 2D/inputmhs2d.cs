using System;

using System.Collections.Generic;

using System.ComponentModel;

using System.Data;

using System.Drawing;

using System.Linq;

using System.Text;

using System.Threading.Tasks;

using System.Windows.Forms;



namespace Program_GUI

{

    public partial class frm_arr2d : Form

    {

        string[,] datamhs = new string[2, 4];

        int count;

        int bar = 0;



        public frm_arr2d()

        {

            InitializeComponent();

        }



        private void textBox2_TextChanged(object sender, EventArgs e)

        {



        }



        private void rd_p_CheckedChanged(object sender, EventArgs e)

        {



        }



        private void Form2_Load(object sender, EventArgs e)

        {

            count = 0;

            cb_prodi.Text = "Program Studi";

            //nambahin data prodi

            cb_prodi.Items.Add("S1 Informatika");

            cb_prodi.Items.Add("S1 Sistem Informasi");

            cb_prodi.Items.Add("S1 Teknik Komputer");

            cb_prodi.Items.Add("S1 Teknologi Informasi");

            cb_prodi.Items.Add("S1 Teknik Elektro");

            cb_prodi.Items.Add("S1 Teknik Sipil");

        }



        private void btn_tambahmhs_Click(object sender, EventArgs e)

        {

           

            datamhs[bar, 0] = txt_npm.Text;

            datamhs[bar, 1] = txt_nama.Text;

            if (rd_p.Checked)

            {

                datamhs[bar, 2] = "Pria";

            }

            if (rd_w.Checked)

            { datamhs[bar, 2] = "Wanita"; }



            datamhs[bar, 3] = cb_prodi.Text;



            bar++;

            count++;

            if (count == 2)

                gb.Enabled = false;





           

            txt_npm.Clear();

            txt_nama.Clear();

            rd_p.Checked = false;

            rd_w.Checked = false;

            cb_prodi.Text = "Program Studi";

            txt_npm.Focus();



        }



        private void btn_tampil_Click(object sender, EventArgs e)

        {

         



            for (int i=0;i<2;i++){

                string temp="";

                for (int j=0;j<4;j++){

                temp+=" "+datamhs[i,j];}

            lb_data.Items.Add(temp);

        }



        }

    }

}