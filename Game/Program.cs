namespace Game
{
    class A
    {
        public int hp;
    }

    class B
    {
        public int hp;
    }

    internal class Program
    {
        static void Main(string[] args)
        {
            // 얕은 복사
            // 객체를 복사할 때 주소 값을 복사하여 같은 
            // 메모리 공간을 가리키는 복사입니다.

            
            A aClass1 = new A();
            aClass1.hp = 10;

            A aClass2 = aClass1;
            aClass2.hp = 999;


            // B bClass = new B();



        }
    }
}