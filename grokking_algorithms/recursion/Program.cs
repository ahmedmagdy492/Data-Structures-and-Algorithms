using System;

namespace recursion
{
    class Program
    {
        static void Main(string[] args)
        {
            CountDown(5);
        }

        public static void InfinteCountDown(int i)
        {
            System.Console.WriteLine(i);
            InfinteCountDown(i-1);
        }

        public static void CountDown(int i)
        {
            System.Console.WriteLine(i);
            if(i > 0)
            {
                CountDown(i-1);
            }
        }
    }
}
