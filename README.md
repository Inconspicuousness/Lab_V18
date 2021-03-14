# Lab_V18
#include <iostream>
 
using namespace std;

class VectorCoordinates
{
 private:
    double x, y, z;  
    
 public:
     VectorCoordinates(double x_ = 0.0, double y_ = 0.0, double z_ = 0.0) : x(x_), y(y_), z(z_)
     {
     }
    
    VectorCoordinates& operator= (const VectorCoordinates& v1);
    VectorCoordinates operator+ (const VectorCoordinates& a);
    VectorCoordinates operator- (const VectorCoordinates& a);
    double operator* (const VectorCoordinates& a);
   
    VectorCoordinates operator+= (VectorCoordinates& a);
    VectorCoordinates operator-= (VectorCoordinates& a);
    double operator*= (VectorCoordinates& a);
    
    VectorCoordinates operator+(int value);
    VectorCoordinates operator-(int value);
    VectorCoordinates operator*(int value);
    VectorCoordinates operator/(int value);

    VectorCoordinates operator+=(int value);
    VectorCoordinates operator-=(int value);
    VectorCoordinates operator*=(int value);
    VectorCoordinates operator/=(int value);

    bool operator> (const VectorCoordinates& a);
    bool operator>= (const VectorCoordinates& a);
    bool operator< (const VectorCoordinates& a);
    bool operator<= (const VectorCoordinates& a);

   friend ostream& operator<< (ostream& out, const VectorCoordinates& vectorcoordinates);
};
ostream& operator<< (ostream& out, const VectorCoordinates& v)
{
    out << " (" << v.x << ", " << v.y << ", " << v.z << ")";
    return out;
}

VectorCoordinates& VectorCoordinates::operator= (const VectorCoordinates& v1)
{
    x = v1.x;
    y = v1.y;
    z = v1.z;
    return *this;
}

VectorCoordinates VectorCoordinates::operator+ (const VectorCoordinates& a)
{
    VectorCoordinates sum;
    sum.x = (a.x + x);
    sum.y = (a.y + y);
    sum.z = (a.z + z);
    return sum;
}

VectorCoordinates VectorCoordinates::operator- (const VectorCoordinates& a)
{
    VectorCoordinates sub;
    sub.x = (x - a.x);
    sub.y = (y - a.y);
    sub.z = (z - a.z);
    return sub;
}

double VectorCoordinates::operator* (const VectorCoordinates& a)
{
    return (a.x * x + a.y * y + a.z * z);
}

VectorCoordinates VectorCoordinates::operator+= (VectorCoordinates& a)
{
    x += a.x;
    y += a.y;
    z += a.z;
    return VectorCoordinates(x, y, z);
}

VectorCoordinates VectorCoordinates::operator-= (VectorCoordinates& a)
{
    x -= a.x;
    y -= a.y;
    z -= a.z;
    return VectorCoordinates(x, y, z);
}

double VectorCoordinates::operator*= (VectorCoordinates& a)
{
    x *= a.x;
    y *= a.y;
    z *= a.z;
    return (x + y + z);
}

VectorCoordinates VectorCoordinates::operator+ (int value)
{
    VectorCoordinates sum;
    sum.x = x + value;
    sum.y = y + value;
    sum.z = z + value;
    return sum;
}

VectorCoordinates VectorCoordinates::operator- (int value)
{
    VectorCoordinates sub;
    sub.x = x - value;
    sub.y = y - value;
    sub.z = z - value;
    return sub;
}

VectorCoordinates VectorCoordinates::operator* (int value)
{
    VectorCoordinates mult;
    mult.x = x * value;
    mult.y = y * value;
    mult.z = z * value;
    return mult;
}

VectorCoordinates VectorCoordinates::operator/ (int value)
{
    VectorCoordinates div;
    div.x = x / value;
    div.y = y / value;
    div.z = z / value;
    return div;
}

VectorCoordinates VectorCoordinates::operator+= (int value)
{
    x += value;
    y += value;
    z += value;
    return VectorCoordinates(x, y, z);
}

VectorCoordinates VectorCoordinates::operator-= (int value)
{
    x -= value;
    y -= value;
    z -= value;
    return VectorCoordinates(x, y, z);
}

VectorCoordinates VectorCoordinates::operator*= (int value)
{
    x *= value;
    y *= value;
    z *= value;
    return VectorCoordinates(x, y, z);
}

VectorCoordinates VectorCoordinates::operator/= (int value)
{
    x /= value;
    y /= value;
    z /= value;
    return VectorCoordinates(x, y, z);
}

bool VectorCoordinates::operator> (const VectorCoordinates& a)
{
    return ( x > a.x) && (y > a.y) && (z > a.z);
}

bool VectorCoordinates::operator>= (const VectorCoordinates& a)
{
    return (x >= a.x) && (y >= a.y) && (z >= a.z);
}

bool VectorCoordinates::operator< (const VectorCoordinates& a)
{
    return (x < a.x) && (y < a.y) && (z < a.z);
}

bool VectorCoordinates::operator<= (const VectorCoordinates& a)
{
    return (x <= a.x) && (y <= a.y) && (z <= a.z);
}
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
