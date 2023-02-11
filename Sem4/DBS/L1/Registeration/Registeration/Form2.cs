using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Registeration
{
    public partial class Form2 : Form
    {
        string name = string.Empty;
        string dob = string.Empty;
        string roln = string.Empty;
        string dept = string.Empty;
        bool flag = false;
        public Form2(string name, string dob, string roln, string dept)
        {
            InitializeComponent();
            this.name = name;
            this.dob = dob;
            this.roln = roln;
            this.dept = dept;
        }

        private void radioButton1_CheckedChanged(object sender, EventArgs e)
        {
            flag = true;
        }

        private void radioButton2_CheckedChanged(object sender, EventArgs e)
        {

        }

        private void Form2_Load(object sender, EventArgs e)
        {
            
        }

        private void button1_Click(object sender, EventArgs e)
        {
            if (flag)
            {
                Form3 frm = new Form3(name, dob, roln, dept);
                frm.Show();
                this.Hide();
            }
        }
    }
}
