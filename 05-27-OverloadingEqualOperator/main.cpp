#include <iostream>
#include "complex.h"

using namespace std;
using namespace mynamespace;

int main(int argc, const char * argv[])
{
    Complex c1(2, 4);
    Complex c2(2, 3);
    
    if( c1 == c2)
    {
        cout << "Equals " << endl;
    }
    else
    {
        cout << "Not equals " << endl;
    }
    

   
    return 0;
}
