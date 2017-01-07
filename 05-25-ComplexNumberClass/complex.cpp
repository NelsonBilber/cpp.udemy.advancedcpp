#include "complex.h"


namespace mynamespace
{
    ostream &operator<<(ostream &out, const Complex &c)
    {
        out << " ( " << c.getReal() << " , " << c.getImaginary() << " ) " ;
        return out;
    }

    Complex::Complex(): real(0), imaginary(0)
    {

    }

    Complex::Complex(double realb, double imaginaryb):
        real(realb), imaginary(imaginaryb)
    {
        
    }

    
    Complex::Complex(const Complex& other)
    {
        cout << "using copy operator ..." << endl;
        real = other.real;
        imaginary = other.imaginary;
    }
    
    const Complex &Complex::operator=(const Complex &other){
        cout << "using assignment operator ..." << endl;
        real = other.real;
        imaginary = other.imaginary;
        return *this;
    }
    
}