#include <iostream>
#include <stack>
#include <queue>

using namespace std;

class Test
{
    string name;
public:
    Test(string name): name(name)
    {}
    
    ~Test() { /*cout << "destroy" << endl;*/} //
    
    void print() const
    {
        cout << name << endl;
    }
    
    bool operator< (const Test& other) const
    {
        return name < other.name;
    }
};

int main(int argc, const char * argv[])
{

    stack<Test> testStack; //LIFO
    
    testStack.push(Test("Mike"));
    testStack.push(Test("Jonh"));
    testStack.push(Test("Sue"));
    
    cout << endl; //when uses push it uses a copy of an object so is less eficient
  /*
    Test tes1 = testStack.top();
    tes1.print();
    testStack.pop();
    
    Test tes2 = testStack.top();
    tes2.print();
   */
    
    while(testStack.size() > 0)
    {
        Test &test = testStack.top();
        test.print();
        testStack.pop();
    }
    
    // QUEUE ..............................
    
    queue<Test> testQueue; //FIFO
    
    testQueue.push(Test("Mike"));
    testQueue.push(Test("Jonh"));
    testQueue.push(Test("Sue"));
    
    cout << endl; //when uses push it uses a copy of an object so is less eficient
    testQueue.back().print();
    cout << endl;
    while(testQueue.size() > 0)
    {
        Test &test = testQueue.front();
        test.print();
        testQueue.pop();
    }
    
    return 0;
}
