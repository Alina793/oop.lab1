using System;
using System.Collections.Generic;
using System.Collections.Specialized;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab__1 
{
    class Program
    {
        static void Main(string[] args)
        {
            Quadrat quad1 = new Quadrat();
            //Ініціалізація змінних з присвоюванням координат вершин квадрата 
            
            int x0 = 1;
            int y0 = 0;
            int x1 = 3;
            int y1 = 0;
            int x2 = 3;
            int y2 = 2;
            int x3 = 1;
            int y3 = 2;
         
            Console.WriteLine($"Координати вершин квадрата: ({x0},{y0}), ({x1},{y1}), ({x2},{y2}), ({x3},{y3})");
            Console.WriteLine($"Площа квадрата: {quad1.Square(x3, x0, y3, y0)} cм^2");
            Console.WriteLine($"Периметр квадрата: {quad1.Perimetr(x3, x0, y3, y0)} cм");
            Console.ReadKey();
        }
    }
}








