#include <iostream>
#include "complex.h"

using namespace std;
using namespace mynamespace;

int main(int argc, const char * argv[])
{
    Complex c1(3, 4);
    Complex c2(2,4);
    
    cout << c1+ c2 + c2 << endl;
    
    cout << endl;
    
    Complex c4(4,2);
    Complex c5 = c4 + 7;
    cout << c5 << endl;
    
    cout << endl;
    
    Complex c6(1,7);
    cout << 3.2 + c6 << endl;
    
    return 0;
}
