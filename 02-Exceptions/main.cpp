#include <iostream>
#include <string>
#include <exception>
using namespace std;


/* ---------------------------------------------------------------------*/
//04 - Catching Exceptions
/* ---------------------------------------------------------------------*/


void goesWrong()
{
    bool error1Detected = true;
    bool error2Detected = true;
    
    if(error1Detected)
    {
        throw bad_alloc();
    }
    
    if(error2Detected)
    {
        throw exception();
    }
}


int main(int argc, const char * argv[])
{
    
    try
    {
        goesWrong();
    }
    catch(bad_alloc &e) // atention to subclass
    {
        cout <<"2 . "<< e.what() << endl;
    }
    catch(exception &e)
    {
        cout << "1 . " <<e.what() << endl;
    }
    
    cout << "Still running ...." << endl;
    
    return 0;
}



/* ---------------------------------------------------------------------*/
//03 - Custom Exceptions
/* ---------------------------------------------------------------------*/
/*

class MyException: public exception
{
public:
    virtual const char* what() const throw()
    {
        return  "something bad happened!";
    }
};


class Test
{
public:
    void goesWrong()
    {
        throw MyException();
    }
};

int main(int argc, const char * argv[])
{
    
    Test test;
    
    try
    {
        test.goesWrong();
    }
    catch(MyException &e)
    {
        cout << "" << e.what() << endl;
    }
    
    cout << "Still running ...." << endl;
    
    return 0;
}

*/

/* ---------------------------------------------------------------------*/
//02 - Standart Exceptions
/* ---------------------------------------------------------------------*/

/*

#include <iostream>
#include <string>
using namespace std;


class CanGoWrong
{
public:
    CanGoWrong()
    {
        char *pMemory = new char[99999999999999999];
        delete [] pMemory;
    }
};
 
int main(int argc, const char * argv[])
{
 
    try{
        CanGoWrong wrong;
    }
    catch(bad_alloc &e)
    {
        cout << "Caught exception = " << e.what() << endl;
    }
    
    cout << "Still running ...." << endl;
    
    return 0;
}

 */


/* ---------------------------------------------------------------------*/
  //01 - Basis Exceptions
/* ---------------------------------------------------------------------*/
/*
 
#include <iostream>
#include <string>
using namespace std;



void mightGoWrong()
{
    bool error = false;
    bool error2 = true;
    
    if(error)
    {
        throw "Something when wrong";
    }
    
    if(error2)
    {
        throw string(" Something else is wrong"); // don't need to use new with exceptions
    }
}

void useMightGoWrong() //nested call function
{
    mightGoWrong();
}


int main(int argc, const char * argv[])
{
    try
    {
        useMightGoWrong();
    }
    catch(int e)
    {
        cout << "Error code :" << e << endl;
    }
    catch(char const * e) //primitive string
    {
        cout << "Error code :" << e << endl;
    }
    catch(string e) //non-primiteve string
    {
        cout << "Error code :" << e << endl;
    }
    
    std::cout << "Still Running" << endl;
    return 0;
}
 
 ------------------------------------------------------------------------ */
