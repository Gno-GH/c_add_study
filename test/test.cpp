#include <iostream>
using namespace std;
class A
{
public:
    A()
    {
        cout<<"A"<<endl;
    }
};
class C
{
public:
    C()
    {
        cout<<"C"<<endl;
    }
};
class B : public A
{
public:
    C c;
    B()
    {
        cout<<"B"<<endl;
    }
};
int main()
{
    B b;
    return 0;
}
