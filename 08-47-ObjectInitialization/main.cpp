#include <iostream>
#include <string>
#include <vector>
#include <initializer_list>

using namespace std;

class Test{
    int id {3};
    string name {"Mike"};
public:
    
    Test() = default; //DEFINES a default constructor
    Test (const Test &other) = default; // DEFAULT COPY CONSTRUCTOR
    Test &operator=(const Test &other) = default; // DEFAULT OPERATOR
    
    
    //Test (const Test &other) = delete; // CANNOT COPY CONSTRUCTOR
    //Test &operator=(const Test &other) = delete; // CANNOT assign
    
    
    Test (int id): id(id)
    {}
    
    void print ()
    {
        cout << id << ": " << name << endl;
    }
};

int main(int argc, const char * argv[])
{
    Test t;
    t.print();
    
    Test test1(77);
    test1.print();
    
    Test test2 = test1;
    test2 = test1;
    
    return 0;
}
