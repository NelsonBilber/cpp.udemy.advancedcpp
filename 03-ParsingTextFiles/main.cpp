//
//  main.cpp
//  03 - Parsing Text Files
//
//  Created by Nelson Rodrigues on 31/01/16.
//  Copyright © 2016 Nelson Rodrigues. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
  
    string filename = "test.txt";
    ifstream input;
    
    input.open(filename);
    
    if(!input.is_open())
    {
        return 1;
    }
    
    while(input)
    {
        string line;
        
        getline(input, line, ':');
        
        int population;
        input >> population;
        
        //input.get();
        
        input >> ws; //c++11
        
        //if(!input)
        //    break;
        
        cout << line << " -- " << population << endl;
        
    }
    
    input.close();
    
    return 0;
}
