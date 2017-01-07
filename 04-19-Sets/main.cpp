#include <iostream>
#include <set>
#include <string>

using namespace std;

class Test
{
    int id;
    string name;
public:
    Test(int id, string name): id(id), name(name)
    {}
    
    void print() const
    {
        cout << id << " : " << name << endl;
    }
    
    bool operator< (const Test& other) const
    {
        return name < other.name;
    }
};

int main(int argc, const char * argv[])
{

    set<int> numbers; //stores uniques elemens and orders
    
    numbers.insert(50);
    numbers.insert(10);
    numbers.insert(30);
    numbers.insert(20);
    
    for(set<int>::iterator it = numbers.begin();
        it != numbers.end();
        it++)
    {
        cout << *it << endl;
    }
    
    set<int>::iterator itFind = numbers.find(30);
    
    if(itFind != numbers.end())
    {
        cout << "Found: " << *itFind << endl;
    }
    
    if(numbers.count(30))
    {
        cout << "Numbers found" << endl;
    }
    
    cout << endl;
    
    set <Test> tests;
    tests.insert(Test(10, "Mike"));
    tests.insert(Test(30, "Joe"));
    tests.insert(Test(20, "Sue"));
    tests.insert(Test(33333, "Joe"));
    
    for(set<Test>::iterator it = tests.begin();
        it != tests.end();
        it++)
    {
        it->print();
    }
    
    
    return 0;
}
