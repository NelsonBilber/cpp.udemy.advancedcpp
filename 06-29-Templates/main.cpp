#include <iostream>
#include <string>

using namespace std;

template <class T, class K>
class Test
{
private:
    T obj;
    
public:
    Test(T obj)
    {
        this->obj = obj;
    }
    
    void print()
    {
        cout << obj << endl;
    }
};


int main(int argc, const char * argv[])
{
    Test<string, int> test1("Hello");
    test1.print();
    
    return 0;
}
