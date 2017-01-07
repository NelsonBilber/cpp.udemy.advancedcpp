#include <iostream>
#include <string>

using namespace std;


template< class T>
void print(T n)
{
    cout <<"Template version " << n << endl;
}

template< class T>
void show()
{
    cout << T() << endl;
}

void print (int value)
{
    cout <<"Non-Template version " << value << endl;
}

int main(int argc, const char * argv[])
{
    //print<string>("Hello");
    //print("Hi there");
    
    print<int>(5); //type inference
    print(5);
    
    show<double>();
    
    return 0;
}
