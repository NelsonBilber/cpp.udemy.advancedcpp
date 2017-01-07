#include <iostream>

using namespace std;

//padding
#pragma pack (push, 1) //para nao limitar o tamanho das estruturas a 64 bit
//uses single bytes boundaries

struct Person
{
    char name[50];
    int age;
    double weight;
};

#pragma pack (pop) //retira a definicao do pack bytes anterior

int main(int argc, const char * argv[]) {

    cout << sizeof(Person) << endl;
    
    return 0;
}
