using System;
using System.Collections;

namespace ConsoleApp2
{
    internal class Program
    {
        static void Main(string[] args)
        {
            IEnumerator update = Update();

            while(true)
            {
                if(Console.ReadKey(true).Key == ConsoleKey.A)
                {
                    update.MoveNext();
                    Console.WriteLine(update.Current);
                }

            }
        }

        static IEnumerator Update()
        {
            int count = 0;
            while (true)
            {
                Console.WriteLine("before atfer 계산");
                Console.WriteLine("값 대입");

                yield return count++;
            }
        }
    }
}
