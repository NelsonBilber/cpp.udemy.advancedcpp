#include <iostream>
#include <vector>
#include <map>

using namespace std;


int main(int argc, const char * argv[])
{

    map <string, vector<int>> scores;
    
    scores["Mike"].push_back(10);
    scores["Mike"].push_back(20);
    scores["Vicky"].push_back(10);
    
    
    for(map<string, vector<int> >::iterator it = scores.begin();
        it != scores.end(); it++)
    {
        string name = it->first;
        vector<int> scorelist = it->second;
        
        cout << name << " : " << flush;
        
        for(int i = 0; i < scorelist.size(); i++)
        {
            cout << scorelist[i] << "  " << flush;
        }
        
        cout << endl;
    }
    
    return 0;
}
