//
//  MyArray.cpp
//  myarry_prc
//
//  Created by Gno on 2017/7/27.
//  Copyright © 2017年 Gno. All rights reserved.
//

#include "MyArray.hpp"
MyArray::MyArray()
{
    this->m_Capacity = 100;
    this->m_Size = 0;
    this->m_Address = new int[100];
}
MyArray::MyArray(int capa)
{
    this->m_Capacity = capa;
    this->m_Size = 0;
    this->m_Address = new int[capa];
}
MyArray::MyArray(const MyArray& array)
{
    this->m_Capacity = array.m_Capacity;
    this->m_Size = array.m_Size;
    this->m_Address = new int[array.m_Capacity];
    for(int i = 0;i<array.m_Size;i++)
    {
        this->m_Address[i] = array.m_Address[i];
    }
}
int MyArray::getData(int index)
{
    return this->m_Address[index];
}
void MyArray::setVal(int index,int val)
{
    this->m_Address[index] = val;
}
void MyArray::pushBack(int val)
{
    this->m_Address[this->m_Size] = val;
    this->m_Size++;
}
MyArray::~MyArray()
{
    if(!this->m_Address)
    {
        delete [] this->m_Address;
        this->m_Address = 0;
    }
}
