#include <iostream>
#include <string>

using namespace std;


template< class T>
void print(T n)
{
    cout << n << endl;
}


int main(int argc, const char * argv[])
{
    print<int>(5);
    print<string>("Hello");
    print("Hi there");
    
    return 0;
}
