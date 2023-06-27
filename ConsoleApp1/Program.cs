using System.Dynamic;

namespace ConsoleApp1
{
    internal class Program
    {
        static void Main(string[] args)
        {
            dynamic pp = new ExpandoObject();
            pp.name = "AAA";
            pp.age = 10;
            pp.OnMessage = (Action<string>)((str) => {
                Console.WriteLine($"입력된 값은 : {str}");
            });

            OnSend(pp);
        }

        static void OnSend(dynamic tt)
        {
            tt.OnMessage("이렇게 됩니다?");
        }
    }
}