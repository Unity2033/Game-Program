using System;

namespace ConsoleApp2
{
    [Flags]
    enum ELEMENT
    {
        Water   = 1 << 0,
        Fire    = 1 << 1,
        Wind    = 1 << 2,
        Earth   = 1 << 3,
        Dark    = 1 << 4,
        Light   = 1 << 5
    }

    internal class Program
    {
        static void Main(string[] args)
        {
            ELEMENT element = ELEMENT.Water | ELEMENT.Fire;
            Console.WriteLine(element);
            Console.WriteLine("불속성이 있나요?");
            Console.WriteLine((element & ELEMENT.Fire) != 0);
            Console.WriteLine((element & ELEMENT.Wind) != 0);

            Console.WriteLine("불 속성 제거");
            element ^= ELEMENT.Fire;
            Console.WriteLine(element);
        }
    }
}
