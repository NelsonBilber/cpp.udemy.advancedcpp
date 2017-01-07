#include <iostream>
#include <string>

using namespace std;


void test(int value)
{
    cout << "Hello ... " << endl;
}


int main(int argc, const char * argv[])
{
    test(5);
    
    void (* pTest)(int) = test; // () is an operator
    
    pTest(6);
    
    return 0;
}
