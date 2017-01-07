#include <iostream>
#include <string>

using namespace std;

class Parent {
public:
	void speak()
	{
		cout << " parent !" << endl;
	}
};

class Brother : public Parent {};

class Sister : public Parent {};

int main(int argc, const char * argv[])
{
	float value = 3.14;
	int ii = static_cast<int>(value);
	cout << ii << endl;


	Parent parent;
	Brother brother;
	
	Parent *pp = &brother; //OK

	//Brother *pb = &parent; // FAIL 
	Brother *pb = static_cast<Brother*>(&parent);  // VERY UNSAVE
	cout << pb << endl;

	Parent *ppb = &brother;
	Brother *pbb = static_cast<Brother*>(ppb); //ERROR PRONE

	Parent &&ppp = static_cast<Parent &&>(parent);
	ppp.speak();

	return 0;
}

