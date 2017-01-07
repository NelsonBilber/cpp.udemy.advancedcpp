#include <iostream>
#include <string>
#include <vector>
#include <initializer_list>


using namespace std;


class Test{
public:
    Test(initializer_list<string> texts){
        for(auto value: texts)
        {
            cout << value << endl;
        }
    }
    
    void print(initializer_list<string> texts)
    {
        for(auto value: texts)
        {
            cout << value << endl;
        }
    }
};

int main(int argc, const char * argv[])
{
    vector <int> numbers {1,3,4,6};
    cout << numbers[2] << endl;
 
    Test test{"apple", "orange", "banana"};
    test.print({"one", "two", "three"}); //create an vector directly on argument
    
    return 0;
}
