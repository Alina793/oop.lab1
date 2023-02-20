using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab__1 
{
    public class Quadrat // Клас для обчислення площі та периметра квадрата
    {
        public double Square(int x3, int x0, int y3, int y0) // Функція знаходження площі
        {
            double square = 0; // Створення змінної для запису площаді квадрата
            square = Math.Pow(Math.Sqrt(Math.Pow(x3 - x0, 2) + Math.Pow(y3 - y0, 2)), 2);
            return square; 
        }

        public double Perimetr(int x3, int x0, int y3, int y0)// Функція знаходження периметра
        {
            double perimetr = 0; // Створення змінної для запису периметра квадрата
            perimetr = Math.Sqrt(Math.Pow(x3 - x0, 2) + Math.Pow(y3 - y0, 2)) * 4;
            return perimetr; 
        }
    }
}









