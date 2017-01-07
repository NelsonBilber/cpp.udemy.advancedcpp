#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main(int argc, const char * argv[])
{
    auto texts =  {"one", "two", "three"};
    
    for(auto text: texts)
    {
        cout << text << endl;
    }
    
    vector<int> number = {1, 2,4};
    
    for(auto n: number)
    {
        cout << n << endl;
    }
    
    string hello = "hello";
    for(auto c: hello)
    {
        cout << c << endl;
    }
    
    return 0;
}
