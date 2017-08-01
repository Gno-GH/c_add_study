//
//  main.cpp
//  template_class
//
//  Created by Gno on 2017/7/31.
//  Copyright © 2017年 Gno. All rights reserved.
//
#include <iostream>
#include <string>
using namespace std;
template<class T>
class A
{
public:
    static int a;
    void fun(T t)
    {
        //cout<<typeid(t).name()<<endl;
        cout<<t<<endl;
    }
    void fun();
};
template<class T>
int A<T>::a = 10;

class B : public A<int>
{
public:
    void fun(int)
    {
        cout<<"B"<<endl;
    }
};
template<class T>
class C : public A<T>
{
public:
    void fun(int)
    {
        cout<<"C"<<endl;
    }
};
void test()
{
    A<string> a;
    B b;
    b.fun(1);
    C<int> c;
    c.fun(1);
    //cout<<typeid(a).name()<<endl;
    a.fun("3333");
}
int main(int argc, const char * argv[]) {
    test();
    A<int> a,c;
    A<char> b;
    a.a = 12;
    b.a = 20;
    cout<<b.a<<endl;
    return 0;
}
