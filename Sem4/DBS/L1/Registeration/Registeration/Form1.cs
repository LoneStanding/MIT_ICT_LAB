using Microsoft.VisualBasic;

namespace Registeration
{
    public partial class Registeration : Form
    {
        string name = string.Empty;
        string dob = string.Empty;
        string roln = string.Empty;
        string dept = string.Empty;
        bool flag = false;
        public Registeration()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void checkBox1_CheckedChanged(object sender, EventArgs e)
        {
            flag = true;
        }

        private void Submit_Click(object sender, EventArgs e)
        {
            if(flag)
            {
                name = text1.Text;
                dob = dateTimePicker1.Value.ToString("dd-MM-yyyy");
                roln = textBox2.Text;
                dept = textBox1.Text;
                Form2 frm = new Form2(name, dob, roln, dept);
                frm.Show();
                this.Hide();
            }
        }

        private void Name_TextChanged(object sender, EventArgs e)
        {

        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void textBox2_TextChanged(object sender, EventArgs e)
        {

        }

        private void dateTimePicker1_ValueChanged(object sender, EventArgs e)
        {

        }
    }
}