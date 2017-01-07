#include <iostream>

using namespace std;


class Animal{
public:
    virtual void speak() = 0;
    virtual void run () = 0;
};


class Dog: public Animal
{
public:
    virtual void speak(){
        cout << "Woof ! " << endl;
    }
};

class Labrador: public Dog{
public:
    
    Labrador() {
        cout << "New labrador ..." << endl;
    }
    
    virtual void run(){
        cout << "labrador running ..." << endl;
    }
};

void test(Animal &a)
{
    a.run();
}

int main(int argc, const char * argv[])
{
    
    Labrador labs[5];
    
    Labrador dog;
    dog.run();
    dog.speak();
    
    // Animal an[4]; // we cannot create an array of
    // abstract objects
    // uneless
    // we use pointers
    
    Animal *animals[5];
    animals[0] = &dog;
    animals[0]->speak();
    
    test(dog);
    
    return 0;
}
