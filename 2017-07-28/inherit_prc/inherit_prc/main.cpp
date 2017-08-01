//
//  main.cpp
//  inherit_prc
//
//  Created by Gno on 2017/7/28.
//  Copyright © 2017年 Gno. All rights reserved.
//

#include <iostream>
using namespace std;
class Root
{
public:
    int m_a;
    static int m_b;
    Root()
    {
        cout<<"Root 构造"<<endl;
    }
    void fun()
    {
        cout<<"Root fun()"<<endl;
    }
    void fun(int i)
    {
        cout<<"Root fun(int i)"<<endl;
    }
    static void showB()
    {
        cout<<"Root static showB()"<<m_b<<endl;
    }
    static void showB(int b)
    {
        cout<<"Root static showB(int b) = "<<m_b<<endl;
    }
    ~Root()
    {
        cout<<"Root 析构"<<endl;
    }
};
int Root::m_b = 10;
class Child_1:public Root
{
public:
    int m_b;
    static int m_c;
    Child_1()
    {
        m_b = 11;
        cout<<"Child_1 构造"<<endl;
    }
    void fun()
    {
        cout<<"Child_1 fun()"<<endl;
    }
    static void showB()
    {
        cout<<"Child_1 static showB() = "<<m_c<<endl;
    }
    ~Child_1()
    {
        cout<<"Child_1 析构"<<endl;
    }
};
int Child_1::m_c = 100;
class Child_2
{
public:
    int m_b;
    Child_2()
    {
        m_b = 22;
        cout<<"Child_2 构造"<<endl;
    }
    ~Child_2()
    {
        cout<<"Child_2 析构"<<endl;
    }
};
class Small:public Child_1,public Child_2
{
public:
    
};
void test01()
{
    Child_1 c1;
    c1.fun();
    c1.Root::fun(1);
    c1.showB();
    c1.Root::showB(1);
    cout<<"Child_1 大小: "<<sizeof(Child_1)<<endl;
    Small sl;
    cout<<"Small 大小:"<<sizeof(Small)<<endl;
    cout<<"Small 访问 Child_1 m_b = "<<sl.Child_1::m_b<<endl;
    cout<<"Small 访问 Child_2 m_b = "<<sl.Child_2::m_b<<endl;
}
int main(int argc, const char * argv[]) {
    test01();
    return 0;
}
