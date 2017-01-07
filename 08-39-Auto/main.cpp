#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;


template <class T, class S>
auto test(T value, S value2)->decltype(value + value2) //podem ser utilizada exressoes
{
    return value + value2;
}

int get() {
    return 9;
}

auto test2()->decltype(get()) //utilizar uma variavel para retornar o tipo de dados
{
    return get();
}


/*
template <class T>
auto test(T value)->decltype(value) // assim infere os valores da classe
{
    return value;
}
*/

/*
 auto test()->int // retorna o tipo de dados int
 {
 return 89;
 }
 */

int main(int argc, const char * argv[])
{
    auto value = 7;
    auto text = "string";
    
    cout << value  << endl;
    cout << text  << endl;
    
    cout << test(5 ,11) << endl;
    
    cout << "=>" << test2() << endl;
    
    return 0;
}
