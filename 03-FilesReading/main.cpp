#include <iostream>
#include <fstream>
#include <string>

using namespace std;


//This tutorial is about reading files


int main(int argc, const char * argv[])
{
    string inFileName = "text.txt";
    
    ifstream inFile;
    
    inFile.open(inFileName);
    
    if(inFile.is_open())
    {
        string line;
        while(!inFile.eof())
        {
            getline(inFile, line);
            cout << line << endl;
       
        }
        inFile.close();
    }
    else
    {
        cout << "Could not open file = " << inFileName << endl;
    }
    
    return 0;
}
