//
//  main.cpp
//  this_point
//
//  Created by Gno on 2017/7/25.
//  Copyright © 2017年 Gno. All rights reserved.
//

#include <iostream>
using namespace std;
class Person
{
public:
    int m_Age;
    mutable int m_Con;
    Person(int age):m_Con(age)
    {
        this->m_Age = age;
    }
    Person& addPlus(const Person &p)
    {
        this->m_Age += p.m_Age;
        return *this;
    }
    bool compareAge(const Person& p)
    {
        return this->m_Age == p.m_Age;
    }
    void showCon() const
    {
        cout<<"m_Con = "<<this->m_Con<<endl;
    }
};

bool isByCompareAge(const Person &p1,const Person&p2)
{
    return p1.m_Age == p2.m_Age;
}
int main(int argc, const char * argv[]) {
    Person p1(10);
    Person p2(10);
    if(isByCompareAge(p1, p2))
        cout<<"年龄相同"<<endl;
    else
        cout<<"年龄不相同"<<endl;
    p1.addPlus(p2).addPlus(p2);
    cout<<p1.m_Age<<endl;
    return 0;
}
