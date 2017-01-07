#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, const char * argv[])
{
    int value [] = {1,4,5};
    
    cout << value[0] << endl;
    
    
    class C {
    public:
        string text;
        int id;
    };
    
    
    C c1 = { "Hello" ,   7};
    
    cout << c1.text << endl;
    
    
    struct S {
        string text;
        int id;
    };
    
    S s1 = { "Hello" , 7};
    
    cout << s1.text << endl;

    struct /* don't need name*/ {
        string text;
        int id;
    } r1 = { "Hello" , 7}, r2 = { "Hello" , 7};
    
    
    cout << r1.text << endl;
    cout << r2.text << endl;
    
    vector<string> strings;
    
    strings.push_back("One");
    
    return 0;
}
