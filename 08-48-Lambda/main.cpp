#include <iostream>
#include <string>
#include <vector>


using namespace std;



void test(void(*pFunc)()){
    pFunc();
}


int main(int argc, const char * argv[])
{
    
    // [](){}; //BASE EXPRESSION
    
    [](){ cout << "Hello " << endl;}();
    
    auto func = [](){ cout << "Hello " << endl;};
    func();
    
    test(func);
    
    test([](){ cout << "Hello " << endl;});
    
    return 0;
}
