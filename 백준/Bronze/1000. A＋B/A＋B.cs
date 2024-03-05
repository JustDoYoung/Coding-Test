using System;

namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            string input = Console.ReadLine();
            string[] inputSplit = input.Split(' ');

            int a = int.Parse(inputSplit[0]);
            int b = int.Parse(inputSplit[1]);

            Console.WriteLine(a+b);
        }
    }
}
