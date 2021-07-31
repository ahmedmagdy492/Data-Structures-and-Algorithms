using System;
using System.Collections;
using System.Collections.Generic;

namespace Arrays_and_Linked_Lists
{
    class Program
    {
        private static LinkedList<string>[] usernames = new LinkedList<string>[26];
        private static string[] options = { "Register New Account", "Login" };

        private static void Register()
        {
            System.Console.WriteLine("Enter Username: ");
            string username = Console.ReadLine();
            username = username.ToLower();
            int letterIndex = username[0] - 97;
            usernames[letterIndex].AddFirst(username);
        }

        private static void Login()
        {
            System.Console.WriteLine("Enter Username: ");
            string username = Console.ReadLine();
            username = username.ToLower();
            int letterIndex = username[0] - 97;
            LinkedListNode<string> foundUsername = usernames[letterIndex].Find(username);

            if(foundUsername == null)
            {
                System.Console.WriteLine("invalid username");
            }
            else{
                System.Console.WriteLine("Welcome {0}", username);
            }
        }

        static void Main(string[] args)
        {
            for(int i = 0; i < usernames.Length; i++)
            {
                usernames[i] = new LinkedList<string>();
            }

            string input = string.Empty;

            do
            {
                Console.Clear();
                System.Console.WriteLine("Welcome to Facebook");
                System.Console.WriteLine("------------------------");

                for(int i = 0;i < options.Length; i++)
                {
                    System.Console.WriteLine($"{i+1}.{options[i]}");
                }

                System.Console.WriteLine("Enter Option: ");
                input = Console.ReadLine();

                switch(input)
                {
                    case "1":
                        // register
                        Register();
                        break;
                    case "2":
                        // login
                        Login();
                        break;
                    default:
                        System.Console.WriteLine("Invalid Option");
                        break;
                }
                System.Console.ReadKey();
            }
            while(input.ToLower() != "exit");
        }
    }
}
