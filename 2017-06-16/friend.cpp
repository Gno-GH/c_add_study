#include <iostream>
using namespace std;
class A
{
public :
    int n;
    int m;
    A();
    ~A();
    friend A operator*(int n_a,A &b);
    friend A operator*(A &b,int n_a);
};
A::A(){}
A::~A(){}
A operator*(int n_a,A &b)
{
    b.n+=n_a;
    return b;    
}
A operator*(A &b,int n_a)
{
    b.n+=n_a;
    return b;
}
int main()
{
    A a;
    a.n = 1;
    a.m = 1;
    a=2*a;
    a=a*2;
    cout<<a.n<<endl;
    return 0;
}
