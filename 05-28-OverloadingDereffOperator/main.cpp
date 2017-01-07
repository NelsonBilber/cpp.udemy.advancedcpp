#include <iostream>
#include "complex.h"

using namespace std;
using namespace mynamespace;

int main(int argc, const char * argv[])
{
    Complex c1(2, 4);
    Complex c2(2, 3);
    
    cout << *c1 << endl;
    
    return 0;
}
