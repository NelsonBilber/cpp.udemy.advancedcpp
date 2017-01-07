#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, const char * argv[])
{
	vector<double> numbers(0);
	//vector<double> numbers(20,1); //inicializa todos os elementos com o valor 1

	cout << "Size of vector " << numbers.size() << endl;

	int capacity = numbers.capacity();
	cout << "Capacity = " << numbers.capacity () << endl;
	for (int i = 0; i < 10000; i++)
	{
		if (numbers.capacity() != capacity)
		{
			capacity = numbers.capacity();
			cout << "Capacity: " << capacity << endl;
		}

		numbers.push_back(i);
		//cout << "Elems => " << numbers.at(i) << endl;
	}
    
	//numbers.clear();
	numbers.resize(10000); //
	
	// size() you can change resize method
	// capacity() you can change with reserve method
	
	cout << numbers[2] << endl;
	cout << "Size of vector " << numbers.size() << endl;
	cout << "Capacity = " << numbers.capacity() << endl;

    return 0;
}
