#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


bool match(string test)
{
    return test.size() == 3;
}

int countStrings(vector<string> &texts, bool (*match)(string))
{
    int total = 0;
    for(int i = 0; i < texts.size(); i++)
    {
        if(match(texts[i]))
        {
            total++;
        }
    }
    return total;
}

int main(int argc, const char * argv[])
{
    vector<string> texts;
    texts.push_back("one");
    texts.push_back("two");
    texts.push_back("three");
    texts.push_back("two");
    texts.push_back("four");
    texts.push_back("two");
    texts.push_back("three");
    
    cout << match("one") << endl;
    
    cout << count_if(texts.begin(), texts.end(), match) << endl;
    
    cout << countStrings(texts,match) << endl;
    
    return 0;
}
