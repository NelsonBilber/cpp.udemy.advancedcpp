#include <iostream>
#include <fstream>
#include <string>

using namespace std;


//This tutorial is about writing files


int main(int argc, const char * argv[])
{
    string outpubFileName = "text.txt";
    //ofstream outFile;
    fstream outFile;
    
    //outFile.open(outpubFileName);
    outFile.open(outpubFileName, ios::out);
   
    if(outFile.is_open())
    {
        outFile << "Hello there " << endl;
        outFile << 123 << endl;
        outFile.close();
    }
    else
    {
        cout << "could not create file " << outpubFileName << endl;
    }
    
    std::cout << "Still running" << endl;
    return 0;
}
