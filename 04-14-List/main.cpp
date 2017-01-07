#include <iostream>
#include <list>

using namespace std;

int main(int argc, const char * argv[])
{
	list<int> numbers;

	numbers.push_back(1);
	numbers.push_back(2);
	numbers.push_back(3);
	numbers.push_front(0);

	list<int>::iterator it = numbers.begin() ;
	it++;

	numbers.insert(it, 10); //inserir a meio necessário utilizar os iteradores
	
	cout << "-> " << *it << endl;

	list<int>::iterator eraseIt = numbers.begin();
	eraseIt++;
	eraseIt = numbers.erase(eraseIt); //invalidate an iterator
	cout << "Elem => " << *eraseIt << endl;


	for (list<int>::iterator it = numbers.begin(); it != numbers.end(); )
	{
		if (*it == 2)
		{
			numbers.insert(it, 1234);
		}

		if (*it == 1)
		{
			it = numbers.erase(it);
		}
		else
		{
			it++;
		}

		//cout << "Elem => " << *it << endl;
	}
	cout << "" << endl;
	for (list<int>::iterator it = numbers.begin();  it != numbers.end(); it++)
	{
		cout << "Elem => " << *it << endl;
	}

    return 0;
}
