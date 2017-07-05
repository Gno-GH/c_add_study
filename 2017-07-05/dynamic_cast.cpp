#include <iostream>
#include<typeinfo>
using namespace std;
class A
{
public :
    A(){}
    virtual void show();
};
class B:public A
{
public :
    B(){}
    void show();
};
class Cat
{
public :
    Cat(){}
};
void A::show()
{
    cout<<"AAA"<<endl;
}
void B::show()
{
    cout<<"BBB"<<endl;
}
int main()
{
    B *bp;
    A *ap;
    B b;
    A a;
    bp = &b;
    ap = &a;
    //RTTI dynamic_cast<T*> if not T* that return null
    if(bp=dynamic_cast<B*>(ap))
        bp->show();
    else 
        ap->show();
    bp = &b;
    cout<<typeid(*ap).name()<<endl;
    cout<<typeid(*bp).name()<<endl;
    Cat *cp,c;
    cp = &c;
    cout<<typeid(*cp).name()<<endl;
    return 0;
}
