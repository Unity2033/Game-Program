using System;
using System.Collections;

namespace ConsoleApp1
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Func1();
            
        }
        private static void Func1()
        {
            while (true)
            {
                Console.WriteLine(1);
                return;
            }
        }
        private static IEnumerator Func2()
        {
            while(true)
            {
                Console.WriteLine(1);
                yield return null;
            }
        }

    }

}
