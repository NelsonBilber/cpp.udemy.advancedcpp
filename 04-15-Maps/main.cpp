#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(int argc, const char * argv[])
{
	map<string, int> ages;

	ages["Mike"] = 40; // add itens to maps
	ages["Raj"]= 20;
	ages["Vicky"] = 30;

	//ages.insert(pair<string, int> ("Peter", 100));
	ages.insert(make_pair("Peter", 100));
	//cout << ages["Raj"] << endl;

	if (ages.find("Vicky") != ages.end())
	{
		cout << "Found Vicky" << endl;
	}
	else
	{
		cout << "Key not founs" << endl;
	}

	for (map<string, int>::iterator it = ages.begin(); it != ages.end(); it++)
	{
		pair<string, int> age = *it;

		cout << age.first << " : " <<age.second << endl;
	}
	cout << endl;
	for (map<string, int>::iterator it = ages.begin(); it != ages.end(); it++)
	{
		cout << it->first << " : "  << it->second <<endl;
	}

    return 0;
}
