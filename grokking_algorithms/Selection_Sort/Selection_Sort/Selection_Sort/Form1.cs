using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Selection_Sort
{
    public partial class Form1 : Form
    {
        private List<int> list = new List<int>
        {
            156,
            141,
            35,
            94,
            88,
            61,
            111
        };

        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            dtList.DataSource = new List<object>(list.Select(o => new { o }));
        }

        private List<int> SelectionSort(List<int> list)
        {
            List<int> sorted_list = new List<int>();
            int original_len = list.Count;

            for(int i = 0; i < original_len; i++)
            {
                int max = list[0];
                for (int j = 1; j < list.Count; j++)
                {
                    if(list[j] > max)
                    {
                        max = list[j];
                    }
                }
                sorted_list.Add(max);
                list.Remove(max);
            }
            return sorted_list;
        }

        private void btnSort_Click(object sender, EventArgs e)
        {
            dtList.DataSource = new List<object>(SelectionSort(list).Select(o => new { o }));
        }
    }
}
