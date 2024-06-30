using System;
using System.IO;
using System.Text;

namespace Exercise
{

    class Program
    {
        static void Main(string[] args)
        {
                StreamWriter sw = new StreamWriter(new BufferedStream(Console.OpenStandardOutput()));
                string[] input = Console.ReadLine().Split(" ");
                int start = int.Parse(input[0]);
                int end = int.Parse(input[1]);

                bool[] arr = new bool[end + 1];

                int rootEnd = (int)Math.Sqrt(end);

                for (int i = 2; i <= rootEnd; i++)
                {
                    if (arr[i] == true) continue;
                    for (int j = i * 2; j <= end; j+=i)
                    {
                        arr[j] = true;
                    }
                }

                for (int i = Math.Max(start, 2); i <= end; i++)
                {
                    if (arr[i] == false) sw.WriteLine(i);
                }
                sw.Close();
        }
    }
}