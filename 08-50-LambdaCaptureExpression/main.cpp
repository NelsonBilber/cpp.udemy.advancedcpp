#include <iostream>
#include <string>
#include <vector>


using namespace std;

int main(int argc, const char * argv[])
{
    int one = 1;
    int two = 2;
    int three = 3;
    
    //capture one and two by value
    [one, two](){ cout << "Hello " << one  << " " << two << endl;}();
    
    //capture all local variables by value
    [=](){ cout << "Hello " << one  << " " << two  << " " << three<< endl;}();
    
    //capture all local variables by value, but capture three by referenece
    [=, &three](){
        cout << "Hello " << one  << " " << two  << " " << three<< endl;
        three = 56;
    }();
    
    cout << three << endl;
    
    //capture all local variables by referenece
    [&](){
        cout << "Hello " << one  << " " << two  << " " << three<< endl;
        three = 56;
    }();
    
    cout << three << endl;
    
    //capture all local variables by referenece by default but two and three by value
    [&, two, three](){
        cout << "Hello " << one  << " " << two  << " " << three<< endl;
    }();
    
    cout << three << endl;
    
    return 0;
}

