#ifndef VECTORCOORDINATES_H
#define VECTORCOORDINATES_H
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

   friend ostream& operator<< (ostream& out, const VectorCoordinates& v);

};
#endif


 // friend VectorCoordinates& operator-= (VectorCoordinates& a, const VectorCoordinates& b);
 /*VectorCoordinates& operator= (const VectorCoordinates& v1)
    {
        x = v1.x;
        y = v1.y;
        z = v1.z;
        
        return *this;
    }*/



   // double operator*= (VectorCoordinates a);


//VectorCoordinates(double x_, double y_, double z_);
//void SetVectorCoordinates(double x_, double y_, double z_);


    /*
    void operator- (const VectorCoordinates&);
    void operator- (double);
    void operator-= (double);
    void operator-= (const VectorCoordinates&);


    void operator+ (const VectorCoordinates&);
    void operator+ (double);
    void operator+= (double);
    void operator+= (const VectorCoordinates&);

    void operator* (const VectorCoordinates&);
    void operator* (double);
    void operator*= (double);
    void operator*= (const VectorCoordinates&);

    void operator/ (const VectorCoordinates&);
    void operator/ (double);
    void operator/= (double);
    void operator/= (const VectorCoordinates&);





    VectorCoordinates operator*= (const VectorCoordinates& a)
        const {
        double sub;
        sub = (x*a.x + y*a.y + z*a.z);

        return sub;
    }


*/