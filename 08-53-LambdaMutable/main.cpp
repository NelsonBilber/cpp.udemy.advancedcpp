#include <iostream>
#include <string>
#include <vector>
#include <functional>
#include <algorithm>

using namespace std;


int main(int argc, const char * argv[])
{
    int cats = 5;
    
    [cats]() mutable { //mutable allow labda capture by value changes
        cats = 8;
        cout << cats << endl;
    }();
    
    
    
    return 0;
}

