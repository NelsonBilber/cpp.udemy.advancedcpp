#include <iostream>
#include <string>

using namespace std;

class Test {
};

//this could be calling with an rvalue ou an lvalue

template <typename T>
void call (T &&arg)
{
    check(forward<T>(arg)); // it also can be used with static_cast<>
}

void check (Test& test)
{
    cout << "lvalue" << endl;
}

void check (Test &&test)
{
    cout << "rvalue" << endl;
}

int main()
{
    Test test;
    auto &&t = test; // reference collapsing rules:
    // when a rvalue is assing to an lvalue, it collapses
    // to an lvalue
    
    call (Test());
    
    return 0;
}