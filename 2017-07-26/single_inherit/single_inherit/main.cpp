//
//  main.cpp
//  single_inherit
//
//  Created by Gno on 2017/7/26.
//  Copyright © 2017年 Gno. All rights reserved.
//

#include <iostream>
using namespace std;
class Base{
public:
    int num;
    Base()
    {
        num = 100;
    }
    void fun()
    {
        cout<<"不带参 fun"<<endl;
    }
    void fun(int)
    {
        cout<<"带参 fun"<<endl;
    }
    void func()
    {
        cout<<"不带参 func"<<endl;
    }
};
class Child_1:public Base{
public:
    int num;
    Child_1()
    {
        num = 1000;
    }
};
class Child_2:public Base{
public:
    void fun()
    {
        cout<<"子类中覆写 fun"<<endl;
        Base::fun();
    }
};
class Child_3:public Base
{
public:
    int fun()
    {
        cout<<"子类中改变fun发返回值"<<endl;
        Base::fun(1);
        return 1;
    }
};
class Child_4:public Base{
public:
    void func(int i)
    {
        cout<<"子类中重载func"<<endl;
        Base::func();
    }
};
int main(int argc, const char * argv[]) {
    Child_1 c1;
    cout<<c1.num<<endl;
    cout<<c1.Base::num<<endl;
    Child_2 c2;
    c2.fun();
    Child_3 c3;
    c3.fun();
    Child_4 c4;
    c4.func(1);
    return 0;
}
