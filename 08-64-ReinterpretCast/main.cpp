#include <iostream>
#include <string>

using namespace std;

class Parent {
public:
	virtual void speak()
	{
		cout << " parent !" << endl;
	}
};

class Brother : public Parent {};

class Sister : public Parent {};

int main(int argc, const char * argv[])
{
	Parent  parent;
	Brother brother;
	Sister  sister;
	
	Parent  *pp = &brother; 
	Sister *pbb = reinterpret_cast<Sister*>(pp); //cast a parent class to a child class pointer, very unsafe
	
	if (pbb == nullptr)
		cout << "invalid cast !!!" << endl;
	else
		cout << pbb << endl;
	
	return 0;
}

