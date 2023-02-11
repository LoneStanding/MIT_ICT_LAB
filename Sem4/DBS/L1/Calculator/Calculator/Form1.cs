namespace Calculator
{
    public partial class Form1 : Form
    {
        string input = string.Empty;
        int op1 = 0, op2 = 0;
        int result;
        char Operation;
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            this.textBox1.Text = input;
            op1 = 0;
            op2 = 0;
            input = string.Empty;
        }

        private void button1_Click(object sender, EventArgs e)
        {
            input += '9';
            textBox1.Text = input;
        }

        private void button3_Click(object sender, EventArgs e)
        {
            input += '1';
            textBox1.Text = input;
        }

        private void button14_Click(object sender, EventArgs e)
        {
            Operation = '/';
            op1 = int.Parse(input);
            input = string.Empty;
        }

        private void button6_Click(object sender, EventArgs e)
        {
            input += '2';
            textBox1.Text = input;
        }

        private void Zero_Click(object sender, EventArgs e)
        {
            input += '0';
            textBox1.Text = input;
        }

        private void Three_Click(object sender, EventArgs e)
        {
            input += '3';
            textBox1.Text = input;
        }

        private void Six_Click(object sender, EventArgs e)
        {
            input += '6';
            textBox1.Text = input;
        }

        private void Five_Click(object sender, EventArgs e)
        {
            input += '5';
            textBox1.Text = input;
        }

        private void Four_Click(object sender, EventArgs e)
        {
            input += '4';
            textBox1.Text = input;
        }

        private void Eight_Click(object sender, EventArgs e)
        {
            input += '8';
            textBox1.Text = input;
        }

        private void Seven_Click(object sender, EventArgs e)
        {
            input += '7';
            textBox1.Text = input;
        }

        private void Equal_Click(object sender, EventArgs e)
        {
            op2 = int.Parse(input);
            if(Operation == '+')
            {
                result = op1+ op2;
            }
            else if(Operation == '-')
            {
                result = op1 - op2;
            }
            else if (Operation == '*')
            {
                result = op1 * op2;
            }
            else if (Operation == '/')
            {
                result = op1 / op2;
            }
            textBox1.Text = result.ToString();
            op1= 0;
            op2= 0;
            input = string.Empty;
        }

        private void Plus_Click(object sender, EventArgs e)
        {
            Operation = '+';
            op1 = int.Parse(input);
            input=string.Empty;
        }

        private void Multi_Click(object sender, EventArgs e)
        {
            Operation = '*';
            op1 = int.Parse(input);
            input = string.Empty;
        }

        private void Min_Click(object sender, EventArgs e)
        {
            Operation = '-';
            op1 = int.Parse(input);
            input = string.Empty;
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {
            
        }
    }
}