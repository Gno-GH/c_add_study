#include <iostream>
using namespace std;
class A
{
public :
    virtual void fun();
};
class B:virtual public A
{
public :
    void fun();
};
class C:virtual public A
{
public :
    void fun();
};
class D:public B,public C
{
public :
    void fun();
    void data();
};
void A::fun()
{
    cout<<"A"<<endl;
}
void B::fun()
{
    cout<<"B"<<endl;
}
void C::fun()
{
    cout<<"C"<<endl;
}
void D::data()
{
    A::fun();
    C::fun();
    B::fun();
}
void D::fun()
{
    cout<<"D"<<endl;
}
int main()
{
    D d;
    d.data();
    d.fun();
    return 0;
}
