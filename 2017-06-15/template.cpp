#include<iostream>
using namespace std;
template <class T>
T max_value(const T &a,const T &b);
int main()
{
    int a,b;
    cin>>a;
    cin>>b;
    cout<<"The max number is :"<<max_value(a,b)<<endl;
    return 0;
}
template <class T>
T max_value(const T &a,const T &b)
{
    return a>b?a:b;
}
