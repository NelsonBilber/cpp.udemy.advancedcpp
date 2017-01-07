#include <iostream>
#include <memory>
#include <string>

using namespace std;

class Test{
public:
    
    Test()
    {
        cout << " created " << endl;
    }
    
    void greet()
    {
        cout << "Hello" << endl;
    }
    
    ~Test()
    {
        cout << "destroyed " << endl;
    }
    
};

class Temp{
private:
    unique_ptr<Test[]> pTest;
public:
    Temp():pTest(new Test[2]){
    }
};

int main()
{
    Temp t;
    
   /* {
        unique_ptr<Test> pTest(new Test);
        pTest->greet();
    }*/
    
    cout << "Finished ..." << endl;
    return 0;
}