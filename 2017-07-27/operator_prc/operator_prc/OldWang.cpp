//
//  OldWang.cpp
//  operator_prc
//
//  Created by Gno on 2017/7/27.
//  Copyright © 2017年 Gno. All rights reserved.
//
#include <iostream>
#include "OldWang.hpp"
#include <string>
using namespace std;
OldWang::OldWang()
{
    this->m_Name = new char[100];
    m_Age = 10;
}
OldWang::OldWang(const OldWang& ow)
{
    
}
OldWang::~OldWang()
{
    if(!this->m_Name)delete [] this->m_Name;
}
OldWang::OldWang(char *s)
{
    this->m_Name = new char[strlen(s)+1];
    strcpy(this->m_Name,s);
}
char* OldWang::getName()
{
    return this->m_Name;
}
void OldWang::setName(char *name)
{
    strcpy(this->m_Name,name);
}
int OldWang::getAge()
{
    return this->m_Age;
}
void OldWang::setAge(int age)
{
    this->m_Age = age;
}
OldWang OldWang::operator+(const OldWang& ow)
{
    OldWang temp;
    temp.m_Age = this->m_Age+ow.m_Age;
    cout<<"老王使用了 成员+"<<endl;
    return temp;
}
OldWang& OldWang::operator--()
{
    --this->m_Age;
    return *this;
}
OldWang OldWang::operator--(int)
{
    OldWang pw = *this;
    --this->m_Age;
    return pw;
}
OldWang& OldWang::operator=(OldWang op)
{
    if(!this->m_Name)delete [] this->m_Name;
    this->m_Name = new char[strlen(op.getName())+1];
    this->m_Age = op.m_Age;
    return *this;
}
bool OldWang::operator==(OldWang &op)
{
    return op.getAge()==this->m_Age&&!strcmp(op.getName(),this->getName());
}
bool OldWang::operator!=(OldWang &op)
{
    return !(op.getAge()==this->m_Age&&!strcmp(op.getName(),this->getName()));
}
void OldWang::operator()(OldWang &op)
{
    cout<<op.getName()<<"和"<<this->m_Name<<"一起玩耍";
}
