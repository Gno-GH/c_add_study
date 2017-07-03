#include <iostream>
using namespace std;
class A
{
public:
    const int a;
    const int b;
    A(int a_r,int b_r):a(0),b(1){}
    ~A();
};
A::A(int a_r,int b_r):a(a_r),b(b_r)
{
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
}
A::~A(){}
int main()
{
    A a(1,2);
    return 0;
}
