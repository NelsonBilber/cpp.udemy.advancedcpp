#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Test{
private:
    int one {1};
    int two {2};
    
public:
    void run(){
        int three {3};
        int four {4};
        
        auto pLambda = [this, three, four]()
        {
            one = 111;
            cout << one << endl; //using this we capure by reference local variables
            cout << two << endl;
            cout << three << endl;
            cout << four << endl;
        };
        pLambda();
    }
};

int main(int argc, const char * argv[])
{
    Test test;
    test.run();
    
    return 0;
}

