#include <iostream>

using namespace std;

class Parent
{
    int one = 0;
public:
    
    Parent():one(0) {}
    
    Parent (const Parent &other):one(0)
    {
        one = other.one;
        
        // ? ??? ?
        //two from child class ...!
        
        cout << "copy parent ... !" << endl;
    }
    
    virtual void print()
    {
        cout << "parent " << endl;
    }
    
    virtual ~Parent(){};
};

class Child: public Parent
{
private:
    int two;
public:
    
    Child():two(0) {}
    
    void print()
    {
        cout << "child" << endl;
    }
};

int main(int argc, const char * argv[])
{
    Child c1;
    
    Parent &p1 = c1; //child
    //Parent p1 = c1; // parent
    p1.print();
    
    Parent p2 = Child(); //copy constructor initialization
    p2.print();
    
    // Upcasting a child objects
    // originates a object slicing because parent ctor()
    // cannot initialize child parameters as example
    // a two paramter
    
    return 0;
}
