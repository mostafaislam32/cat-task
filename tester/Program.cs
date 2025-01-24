using System;


namespace ConsoleApp29
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("enter the num opreation");

            int x=Convert.ToInt16(Console.ReadLine());

            string[] opreatin=new string[x];
            Console.WriteLine("------------------");
            Console.WriteLine("enter the num ");
            int y = Convert.ToInt16(Console.ReadLine());

            for (int i = 0; i < opreatin.Length; i++)
            {
                opreatin[i]= Console.ReadLine();    
            }
           int z= fun(y,opreatin);
            Console.WriteLine("------------------");
            Console.WriteLine(z);

            Console.ReadLine();
        }

     static int fun(int y,string []x)
        { 
            
            for (int i = 0; i < x.Length; i++)
            {
                switch (x[i])
                {
                    case "++":
                        ++y;
                        break;
                    case "--":
                        --y;
                        break;
                }

            }

            return y;
            
        }

    }
}
