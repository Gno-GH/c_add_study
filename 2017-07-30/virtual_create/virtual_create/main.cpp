//
//  main.cpp
//  virtual_create
//
//  Created by Gno on 2017/7/30.
//  Copyright © 2017年 Gno. All rights reserved.
//

#include <iostream>
using namespace std;
class A
{
public:
    virtual ~A() = 0;
};
A::~A()
{
    cout<<"A 析构"<<endl;
}
class B:public A
{
public:
    ~B()
    {
        cout<<"B 析构"<<endl;
    }
};
class C:public B
{
public:
    ~C()
    {
        cout<<"C 析构"<<endl;
    }
};
void test()
{
    A *a = new C;
    delete a;
}
class D
{
public:
    virtual void fun() = 0;
};
class E
{
public:
    virtual void fun() = 0;
};
class F:public D,public E
{
public:
    void fun()
    {
        cout<<"fun"<<endl;
    }
};
void test2()
{
    F f;
    f.fun();
}
int main(int argc, const char * argv[]) {
    //test();
    test2();
    return 0;
}
