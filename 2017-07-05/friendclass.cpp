#include <iostream>
using namespace std;
class Computer;
class Mouse
{
public :
    Mouse(){}
    ~Mouse(){}
    void show(const Computer c);
};
class Computer
{
private :
    int m_value;
public :
    Computer(int value){m_value = value;}
    ~Computer(){}
    friend void Mouse::show(const Computer c);
};
inline void Mouse::show(const Computer c)
{
   cout<<c.m_value<<endl; 
}
int main()
{
    Computer c(11);
    Mouse m;
    m.show(c);
    return 0;
}
