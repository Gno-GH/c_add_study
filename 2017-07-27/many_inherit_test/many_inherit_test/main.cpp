//
//  main.cpp
//  many_inherit_test
//
//  Created by Gno on 2017/7/27.
//  Copyright © 2017年 Gno. All rights reserved.
//

#include <iostream>
using namespace std;
class A
{
public:
    int a;
    A()
    {
        cout<<"A"<<endl;
    }
    ~A()
    {
        cout<<"~A"<<endl;
    }
};
class B:virtual public A
{
public:
    B()
    {
        cout<<"B"<<endl;
    }
    ~B()
    {
        cout<<"~B"<<endl;
    }
};
class C:virtual public A
{
public:
    C()
    {
        cout<<"C"<<endl;
    }
    ~C()
    {
        cout<<"~C"<<endl;
    }
    
};
class E
{
public:
    E()
    {
        cout<<"E"<<endl;
    }
    ~E()
    {
        cout<<"~E"<<endl;
    }
};
class D:public C,public B
{
public:
    E e;
    E d;
    D()
    {
        cout<<"D"<<endl;
    }
    ~D()
    {
        cout<<"~D"<<endl;
    }
    
};

int main(int argc, const char * argv[]) {
    D d;
    return 0;
}
