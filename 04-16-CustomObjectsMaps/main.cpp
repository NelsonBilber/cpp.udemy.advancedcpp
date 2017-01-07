#include <iostream>
#include <map>
#include <string>

using namespace std;

class Person
{
private:
	string name;
	int age;

public:
	Person():
		name(""), 
		age(0)
	{}

	Person(string name, int age) 
		: name(name),
		age(age)
	{}

	//copy ctor

	Person(const Person &other)
	{
		cout << "copy ctor running " << endl;
		name = other.name;
		age = other.age;
	}

	void print()  { cout << name << " : " << age << endl; }
};

using namespace std;

int main(int argc, const char * argv[])
{
	map<int, Person> people;

	people[0] = Person("Mike", 40);
	people[1] = Person("Vikcy", 30);
	people[2] = Person("Raj", 20);

	people.insert(make_pair(55, Person("Bob", 45)));
	people.insert(make_pair(55, Person("Sue", 24)));

	for (map<int, Person>::iterator it = people.begin(); it != people.end(); it++)
	{
		cout << it->first << " -> " << flush;
		it->second.print();
	}

    return 0;
}
