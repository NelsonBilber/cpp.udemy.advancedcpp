#include <iostream>
#include <string>

using namespace std;

template <class T>
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
    Test<string> test1("Nelson");
    test1.print();
    
    Test<int> test2(23);
    test2.print();
    
    return 0;
}
