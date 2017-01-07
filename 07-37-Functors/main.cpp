#include <iostream>
#include <string>

using namespace std;


struct Test
{
    virtual bool operator()(string& text) = 0;
    
    virtual ~Test(){}
        
};

/* functor */
struct MatchTest: public Test {
    bool operator()(string& text){
        return text == "lion";
    }
};


void check(string text, Test &test)
{
    if(test(text))
    {
        cout << "Text match" << endl;
    }
    else
    {
        cout << "no match ... !" << endl;
    }
}


int main(int argc, const char * argv[])
{
    MatchTest pred;
    string value = "lion";
    
    cout << pred(value) << endl; // applies () operator
    
    MatchTest m;
    check ("lion", m);
    
    return 0;
}
