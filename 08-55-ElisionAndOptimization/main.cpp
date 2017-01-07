#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Test
{
public:
    Test()
    {
        cout << " constructor " << endl;
    }
    
    Test(int i)
    {
        cout << " constructor with parameters " << endl;
    }
    
    Test(const Test& other)
    {
        cout << "Copy constructor ... " << endl;
    }
    
    Test &operator=(const Test& other)
    {
        cout << "assign operator ... " << endl;
        return *this;
    }
    
    ~Test()
    {
        cout << " dtor() " << endl;
    }
    
    friend ostream &operator<<(ostream &out, const Test &test);
    
};

ostream &operator<<(ostream &out, const Test &test)
{
    out << "Hello from test";
    return out;
}

Test getTest()
{
    return Test();
}


int main(int argc, const char * argv[])
{
    cout << "c++ 98 style" << endl;
    
    //Test test1 = getTest();
    //cout << test1 << endl;
    
    cout << "-" << endl;
    
    vector<Test> vect;
    vect.push_back(Test());
    
    return 0;
}

