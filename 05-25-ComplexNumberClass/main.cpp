#include <iostream>
#include "complex.h"

using namespace std;
using namespace mynamespace;

int main(int argc, const char * argv[])
{
    Complex c1(2, 3);
    //using copy contructor because it wasn't initialized
    Complex c2 = c1;
    
    c1 = c2;
    
    cout << c1 << " : " << c2 << endl;
    
    return 0;
}
