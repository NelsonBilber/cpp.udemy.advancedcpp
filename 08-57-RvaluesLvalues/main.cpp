#include <iostream>
#include <string>
#include <vector>
#include <memory>

using namespace std;


class Test
{

private:
    static const int SIZE = 100;
    int *_pBuffer;
    
public:
    Test()
    {
        cout << " constructor " << endl;
        _pBuffer = new int [SIZE]{};
        
    }
    
    Test(int i)
    {
        cout << " constructor with parameters " << endl;
       _pBuffer = new int [SIZE]{};
        for(int i = 0; i < SIZE; i++)
        {
            _pBuffer [i] = 7*i;
        }
    }
    
    Test(const Test& other)
    {
        cout << "Copy constructor ... " << endl;
        _pBuffer = new int [SIZE]{};
        memcpy(_pBuffer, other._pBuffer, SIZE*sizeof(int));
    }
    
    Test &operator=(const Test& other)
    {
        cout << "assign operator ... " << endl;
        _pBuffer = new int [SIZE]{};
        memcpy(_pBuffer, other._pBuffer, SIZE*sizeof(int));
        return *this;
    }
    
    ~Test()
    {
        cout << " dtor() " << endl;
        delete [] _pBuffer;
    }
    
    friend ostream &operator<<(ostream &out, const Test &test);
    
};

ostream &operator<<(ostream &out, const Test &test)
{
    out << "Hello from test";
    return out;
}

Test getTest()
{
    return Test();
}


int main(int argc, const char * argv[])
{
    cout << "c++ 98 style" << endl;
    
    //Test test1 = getTest();
    //cout << test1 << endl;
    
    cout << "-" << endl;
    
    vector<Test> vect;
    vect.push_back(Test());
    
    return 0;
}

