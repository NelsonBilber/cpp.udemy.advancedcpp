#include <iostream>

using namespace std;


class Test
{
    int id;
    string name;
public:
    Test(): id(0), name("") {}
    Test(int id, string name): id(id),name(name)
    {}
    
    
    ~Test() { /*cout << "destroy" << endl;*/} //
    
    void print() const
    {
        cout << id << " : " << name << endl;
    }
    
    const Test &operator=(const Test& other)
    {
        cout << "Assignemt working ..." << endl;
        id = other.id;
        name = other.name;
        return *this;
    }
    
    Test(const Test& other)
    {
        /*
         initialize an object and dont give initial values
         it will ise copy constructor
         */
        cout << "copy ctor ..." << endl;
        id = other.id;
        name = other.name;
    
    }
    
};

/*
 
 RULE OF THREE
 
 If you implement one of these three:
    assingn operator
    copy contructor
    delete contrutructo
 you HAVE to implemnet the other two
 
 */


int main(int argc, const char * argv[])
{

    Test test1(10, "Mike");
    test1.print();
    
    Test test2(20, "Bob");
    test2.print();
    
    cout << "\n equals \n " << endl;
    
    test2 = test1;
    test1.print();
    
    Test test3;
    //test3 = test2 = test1;
    
    test3.operator=(test2);
    //cout << test3 << endl;
    test3.print();
    
    cout << "" << endl;
    
    //copy initialization
    Test test4 = test1;
    test4.print();
    
    return 0;
}
