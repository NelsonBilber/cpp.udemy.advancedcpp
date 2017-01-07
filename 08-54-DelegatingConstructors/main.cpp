#include <iostream>
#include <string>

using namespace std;

class Parent {
    int dogs {5};
    string text;
public:
    Parent():Parent("Hello p ")
    {
        cout << "No parameter parent constructor " << endl;
    }
    
    Parent (string text)
    {
        this->text = text;
        cout << "string parent constructor " << endl;
    }
};

class Child: public Parent{
public:
    Child()= default;
};

int main(int argc, const char * argv[])
{

    Parent parent;
    Child child;
    
    
    return 0;
}

