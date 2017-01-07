#include <iostream>
#include <string>

using namespace std;

template<class T>
class ring {
    
private:
    int m_pos;
    int m_size;
    T *m_values;
public:
    class iterator;
    
public:
    ring(int size): m_pos(0), m_size(size), m_values(NULL)
    {
        m_values = new T[size];
    }
    
    ~ring(){
        
        if(m_values)
        {
            delete[] m_values;
        }
    }
    
    int size()
    {
        return m_size;
    }
    
    iterator begin(){
        return iterator(0, *this);
    }
    
    iterator end(){
        return iterator(m_size, *this);
    }
    
    void add(T value)
    {
        m_values[m_pos++] = value;
        
        if(m_pos == m_size)
        {
            m_pos = 0;
        }
    }
    
    T &get(int pos)
    {
        return m_values[pos];
    }
};

template<class T>
class ring<T>::iterator{
private:
    int m_pos;
    ring &m_ring;
public:
    iterator(int pos, ring& aRing): m_pos(pos), m_ring(aRing){
    }
    
    iterator &operator++(int){
        m_pos++;
        return *this;
    }
    
    iterator &operator++(){
        m_pos++;
        return *this;
    }
    
    T &operator*()
    {
        return m_ring.get(m_pos);
    }
    
    bool operator!=(const iterator &other) const{
        return m_pos != other.m_pos;
    }
    
};



int main(int argc, const char * argv[])
{
    ring<string> textstring(3);
    textstring.add("one");
    textstring.add("two");
    textstring.add("three");
    textstring.add("four");
    
    //C++ 98 style
    for(ring<string>::iterator it = textstring.begin(); it != textstring.end(); it++)
    {
        cout << *it << endl;
    }
    
    cout << endl;
    
    
    //c++ 11 style
    for(string value : textstring)
    {
        cout << value << endl;
    }
    
    /* out put shoulf be 
     
     four
     one
     two */
     
    
    return 0;
}
