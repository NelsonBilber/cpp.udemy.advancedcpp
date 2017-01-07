#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#pragma pack (push, 1) 

struct Person
{
    char name[50];
    int age;
    double height;
};

#pragma pack (pop)

int main(int argc, const char * argv[]) {
    
    cout << sizeof(Person) << endl;
    
    string fileName = "test.bin";
    
    //write binary file
    
    ofstream outputFile;
    Person someone = { "nelson", 31, 170 };
    
    outputFile.open(fileName, ios::binary);
    
    if(outputFile.is_open())
    {
        outputFile.write(reinterpret_cast<char *>(&someone), sizeof(Person));
        
        outputFile.close();
    }
    else
    {
        cout << "Could not create file " +  fileName << endl;
    }
    
    
    // read binary file
    
    ifstream intputFile;
    Person someoneElse = {};
    
    intputFile.open(fileName, ios::binary);
    
    if(intputFile.is_open())
    {
        intputFile.read(reinterpret_cast<char *>(&someoneElse), sizeof(Person));
        
        intputFile.close();
    }
    else
    {
        cout << "Could not create file " +  fileName << endl;
    }

    cout << someoneElse.name << " - " << someoneElse.age << " - "
    << someoneElse.height << endl;
    
    return 0;
}
