#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, const char * argv[])
{
    vector<string> strings;

    strings.push_back("one");
    strings.push_back("two");
    strings.push_back("three");
    strings[3] = "dog";
    
    cout << strings[1] << endl;
    cout << strings.size() << endl;
    
    for(int i = 0; i < strings.size(); i++)
    {
        cout << strings[i] << endl;
    }
    
    //using iterators
    vector<string>::iterator it = strings.begin();
    it++;
    cout << "iterator => " << *it << endl;
    
    for(vector<string>::iterator it = strings.begin(); it != strings.end();
        it++)
    {
        cout <<" iterator 2 => " << *it << endl;
    }
    
    return 0;
}
