#include <iostream>
#include <vector>

using namespace std;

class Test
{
    int id;
    string name;
public:
    Test(int id, string name): id(id),name(name)
    {}
  
    
    ~Test() { /*cout << "destroy" << endl;*/} //
    
    void print() const
    {
        cout << id << " : " << name << endl;
    }
    
    /*
    bool operator< (const Test& other) const
    {
        return name < other.name;
    }
     */
    
    //With friend name it could access
    //to private members from classes
    friend bool comp(const Test&a, const Test &b);
};

bool comp(const Test&a, const Test &b)
{
    return a.name < b.name;
}


int main(int argc, const char * argv[])
{

    vector<Test> tests;
    
    tests.push_back(Test(5,"Mike"));
    tests.push_back(Test(10,"Jonh"));
    tests.push_back(Test(3, "Sue"));
    
    //sort using stl methods
    sort(tests.begin(), tests.end(), comp);
    
    for(int i = 0; i < tests.size(); i++)
    {
        tests[i].print();
    }
    
    return 0;
}
