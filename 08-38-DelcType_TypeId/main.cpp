#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

class Test{
    int i = 0;
};

int main(int argc, const char * argv[])
{
    double value;
    string str_value;
    
    cout << typeid(value).name() <<endl;
    cout << typeid(str_value).name() <<endl;
    
    decltype(str_value) name = "bob"; //infere o tipo da variavel e determina o seu tipo
    cout << typeid(name).name() <<endl;
    
    Test tt;
    cout << typeid(tt).name() << endl;
    decltype(tt) ttt;
    cout << typeid(ttt).name() << endl;
    
    return 0;
}
