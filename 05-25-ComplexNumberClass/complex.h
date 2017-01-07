#ifndef COMPLEX_H_
#define COMPLEX_H_

#include <iostream>

using namespace std;

namespace mynamespace
{

class Complex
{
public:
    Complex();
    Complex(double real, double imaginary);
    Complex(const Complex &other);
    
    const Complex &operator=(const Complex &other);
    
    inline double getReal() const { return real;}
    inline double getImaginary() const { return imaginary;}
    
private:
    double real;
    double imaginary;
    
};
    ostream &operator<<(ostream &out, const Complex &c);
}

#endif