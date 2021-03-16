#include "VectorCoordinates.h"
#include <iostream>
#include <cmath>
using namespace std;

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





















//VectorCoordinates& operator-= (VectorCoordinates& a, const VectorCoordinates& b)
//{
//    a.x -= b.x;
//    a.y -= b.y;
 //   a.z -= b.z;

//    return a;
//}





//double& operator*= (VectorCoordinates& a, const VectorCoordinates& b)
//{
//    a.x *= b.x;
//    a.y *= b.y;
//    a.z *= b.z;
  //  double sum = a.x + a.y + a.z;
    //return sum;
//}
//VectorCoordinates& operator-= (VectorCoordinates& a, const VectorCoordinates& b)
//{
//    a.x -= b.x;
//    a.y -= b.y;
//    a.z -= b.z;
//
//    return a;
//}





/*
double VectorCoordinates::operator*=(VectorCoordinates a)
{
    a.x *= x;
    a.y *= y;
    a.y *= y;
    double sum = a.x + a.y + a.z;
    return sum;
}

double operator*= (VectorCoordinates& a, VectorCoordinates& b)
{
    return a.getX() * b.getX() + a.getY() * b.getY() + a.getZ() * b.getZ();
}


VectorCoordinates operator- (VectorCoordinates& a1, VectorCoordinates& b1)
{
    VectorCoordinates sub;
    sub = (a1.getX() - b1.getX());
    return VectorCoordinates(a1.getX()-b1.getX());
}


  VectorCoordinates operator+ (const VectorCoordinates& a, const VectorCoordinates& b)
  {
   VectorCoordinates sum;
   sum.x = a.x + b.x;
   sum.y = a.y + b.y;
   sum.z = a.z + b.z;
   return sum;
  }

VectorCoordinates operator- (const VectorCoordinates& a, const VectorCoordinates& b)
{
    VectorCoordinates sub;
    sub.x = a.x - b.x;
    sub.y = a.y - b.y;
    sub.z = a.z - b.z;
    return sub;
}

VectorCoordinates operator* (const VectorCoordinates& a, const VectorCoordinates& b)
{
    VectorCoordinates scal;
    scal.x = a.x * b.x;
    scal.y = a.y * b.y;
    scal.z = a.z * b.z;
    return scal;
}








double scalar(VectorCoordinates a, VectorCoordinates b)
{
    return (a.getX() * b.getX() + a.getY() * b.getY() + a.getZ() * b.getZ());
}

double length(VectorCoordinates a)
{
    return (sqrt(a.getX() * a.getX() + a.getY() * a.getY() + a.getZ() * a.getZ()));
}

double cosine(VectorCoordinates a, VectorCoordinates b)
{
    double scal = (a.getX() * b.getX() + a.getY() * b.getY() + a.getZ() * b.getZ());
    double length_a = sqrt(a.getX() * a.getX() + a.getY() * a.getY() + a.getZ() * a.getZ());
    double length_b = sqrt(b.getX() * b.getX() + b.getY() * b.getY() + b.getZ() * b.getZ());
    double cos = scal / (length_a * length_b);
    return cos;
}

*/

/*
VectorCoordinates::VectorCoordinates(double x_, double y_, double z_)
{
    SetVectorCoordinates(x_, y_, z_);
}

void VectorCoordinates::SetVectorCoordinates(double x_, double y_, double z_)
{
   x = x_;
   y = y_;
   z = z_;
}
*/