#include <iostream>
#include <string>
#include <vector>
#include <memory>

using namespace std;


class Test
{

private:
    static const int SIZE = 100;
	int *_pBuffer{nullptr};
    
public:
    Test()
    {
        //cout << " constructor " << endl;
        _pBuffer = new int [SIZE]{};
        
    }
    
    Test(int i)
    {
        //cout << " constructor with parameters " << endl;
       _pBuffer = new int [SIZE]{};
        for(int i = 0; i < SIZE; i++)
        {
            _pBuffer [i] = 7*i;
        }
    }
    
    Test(const Test& other)
    {
        cout << "COPY constructor ... " << endl;
        _pBuffer = new int [SIZE]{};
        memcpy(_pBuffer, other._pBuffer, SIZE*sizeof(int));
    }
	
	Test(Test&& other)
	{
		cout << "MOVE constructor ... " << endl;
		_pBuffer = other._pBuffer;
		other._pBuffer = nullptr;
	}
    
    Test &operator=(const Test& other)
    {
        cout << "Assign NORMAL operator ... " << endl;
        _pBuffer = new int [SIZE]{};
        memcpy(_pBuffer, other._pBuffer, SIZE*sizeof(int));
        return *this;
    }

	Test &operator=(Test&& other)
	{
		cout << "MOVE ASSIGN OPERATOR => operator ... " << endl;

		delete [] _pBuffer;
		_pBuffer = other._pBuffer;
		other._pBuffer = nullptr;

		return *this;
	}
    
    ~Test()
    {
        //cout << " dtor() " << endl;
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
    cout << "c++11 style" << endl;
    
   // vector<Test> vect;
   // vect.push_back(Test());

	Test teste;
	teste = getTest();

	return 0;
}

