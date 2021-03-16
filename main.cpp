#include "VectorCoordinates.h"
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    const int value = 100;
    
    VectorCoordinates a(1.0, 2.5, 3.0), b(4.25, 5.3, 7.0), c(2.45, 7.0, 9.92);
    VectorCoordinates d;
    d = b;

    cout << "const = " << value << "\n";
    cout << "Вектор a" << a << ", вектор b" << b << ", вектор c" << c << ", вектор d" << d <<"\n";
    cout << "Присвоенный вектор d, равный b:" << d << "\n" << endl;
    
    cout << "Сложение вектора a + b: " << (a + b) << "\n";
    cout << "Вычитание вектора a - b: " << (a - b) << "\n";
    cout << "Скалярное произведение векторов a * b: " << (a * b) << "\n" << endl;

    cout << "Вычитание из вектора c -= d: " << (c -= d) << "\n";
    cout << "Прибавление к вектору c += d: " << (c += d) << "\n";
    cout << "Скалярное произведение векторов c *= d: " << (c *= d) << "\n" << endl;

    cout << "Сложение вектора с константой a + const: " << (a + value) << "\n";
    cout << "Вычитание вектора и константы a - const: " << (a - value) << "\n";
    cout << "Умножение вектора на константу a * const: " << (a * value) << "\n";
    cout << "Деление вектора на константы a / const: " << (a / value) << "\n" << endl;


    cout << "Прибавление к вектору константы d += const: " << (d += value) << "\n";
    cout << "Вычитание из вектора константы d -= const: " << (d -= value) << "\n";
    cout << "Умножение вектора на константу d *= const: " << (d *= value) << "\n";
    cout << "Деление вектора на константу d /= const: " << (d /= value) << "\n" << endl;

    if (b > a)
    cout << "b > a\n";
    if (c >= b)
    cout << "c >= b\n";
    if (a < d)
    cout << "a < d\n";
    if (d <= d)
    cout << "d <= d\n";
  
    return 0;
}   


//std::cout << "Сложение первого и второго векторов: (" << VectorSum.getX() <<
//   "; " << VectorSum.getY() << "; " << VectorSum.getZ() << ") \n" << std::endl;

    //VectorCoordinates VectorSum = a + b;
    //VectorCoordinates VectorSub = a - b;
   // VectorCoordinates VectorScal = a *= b;
   // VectorCoordinates Vectorconst = a * value;