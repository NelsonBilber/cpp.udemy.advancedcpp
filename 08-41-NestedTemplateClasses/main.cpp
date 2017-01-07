#include <iostream>
#include <string>

using namespace std;

template<class T>
class ring{
public:
    class iterator;
};

template<class T>
class ring<T>::iterator{
public:
    void print(){
        cout << "Hello from iterator => " << T() << endl;
    }
};



int main(int argc, const char * argv[])
{
    ring<int>::iterator it; //nested class
    it.print();
    
    /*
    ring<string> textstring(3);
    textstring.add("one");
    textstring.add("two");
    textstring.add("three");
    textstring.add("four");
    
    for(int i = 0; i < textstring.size(); i++)
    {
        cout << textstring.get(i) << endl;
    }
     */
    
    /* out put shoulf be 
     
     four
     one
     two */
     
    
    return 0;
}
