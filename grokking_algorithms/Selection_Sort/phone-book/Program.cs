using System;
using System.Collections.Generic;

namespace phone_book
{
    class Program
    {
        private static List<string> list = new List<string>
        {
            "Mohamed",
            "Hany",
            "Nader",
            "Sayed",
            "Hager",
            "Ahmed",
            "Wael",
            "Hamed",
            "Magdy"
        };
        
        static void Main(string[] args)
        {
            System.Console.WriteLine("Before: ");
            foreach(var item in list)
            {
                System.Console.WriteLine(item);
            }

            System.Console.WriteLine("----------------");
            System.Console.WriteLine("Sorted: ");

            var sortedList = SelectionSort(list);
            foreach(var item in sortedList)
            {
                System.Console.WriteLine(item);
            }
        }

        private static List<string> SelectionSort(List<string> list)
        {
            List<string> sorted_list = new List<string>();
            int orginal_len = list.Count;

            for(int i = 0; i < orginal_len; i++)
            {
                string max = list[0];
                for(int j = 1; j < list.Count; j++)
                {
                    if(list[j][0] > max[0])
                    {
                        max = list[j];
                    }
                }
                sorted_list.Add(max);
                list.Remove(max);
            }
            return sorted_list;
        }
    }
}
