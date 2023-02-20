#include "Header.h"

   
 double Kvadrat::Square() // Функція знаходження площі
    {
       return  pow(sqrt(pow(x3 - x0, 2) + pow(y3 - y0, 2)), 2);
    }

  double Kvadrat::Perimetr()// Функція знаходження периметра
    {
        return sqrt(pow(x3 - x0, 2) + pow(y3 - y0, 2)) * 4;
    }



