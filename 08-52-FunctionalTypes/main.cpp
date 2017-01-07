#include <iostream>
#include <string>
#include <vector>
#include <functional>
#include <algorithm>

using namespace std;


//function pointer
bool check(string &test)
{
    return test.size()==3;
}

//functor - overload operator ()

class Check{
public:
    bool operator()(string &test){
        return test.size() == 5;
    }
}check1;


//passing usign functional
void run(function<bool(string&)> check)
{
    string test = "dog";
    cout << check(test) << endl;
}

int main(int argc, const char * argv[])
{
    vector<string> vect {"one", "two", "three"};
    
    //da a posição de uma string om determinado nr de parametros
    cout <<  count_if(vect.begin(), vect.end(),
                      [] (string test) {return test.size() == 3;}) << endl;
             
    cout <<  count_if(vect.begin(), vect.end(),check) << endl;
    
    cout <<  count_if(vect.begin(), vect.end(),check1) << endl;
    
    auto lambda =   [] (string test) {return test.size() == 3;};
    run (lambda);
    run (check1);
    run (check);
    
    function<int(int, int)> add = [](int one, int two){ return one + two;};
    cout << add(5,6) << endl;
    
    return 0;
}

