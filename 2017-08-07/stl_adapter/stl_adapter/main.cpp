//
//  main.cpp
//  stl_adapter
//
//  Created by Gno on 2017/8/7.
//  Copyright © 2017年 Gno. All rights reserved.
//

#include <iostream>
#include <functional>
#include <algorithm>
#include <vector>
using namespace std;
class Dog
{
public:
    int m_Age;
    Dog(int age):m_Age(age){}
    Dog(){m_Age = 0;}
    void show(int age)
    {
        cout<<m_Age+age<<endl;
    }
    bool operator>(const Dog& d)const
    {
        return this->m_Age < d.m_Age;
    }
};
class DogGrawth:public binary_function<Dog, int, void>
{
public:
    void operator()(Dog d,int age) const
    {
        //d.m_Age +=age;
        cout<<"Age :"<<d.m_Age<<endl;
    }
};
void print(Dog d,int age)
{
    cout<<d.m_Age+age<<endl;
}
void test()
{
    vector<Dog> vds;
    int i = 0;
    for(;i<5;++i)vds.push_back(Dog(i));
    Dog d(3);
    //for_each(vds.begin(), vds.end(), bind2nd(DogGrawth(), 5));
    //vector<Dog>::iterator it = find_if(vds.begin(), vds.end(), not1(bind2nd(greater<Dog>(), d)));
    //cout<<it->m_Age<<endl;
    //for_each(vds.begin(), vds.end(), bind2nd(ptr_fun(print),5));
    for_each(vds.begin(), vds.end(), bind2nd(mem_fun_ref(&Dog::show),5));
}
int main(int argc, const char * argv[]) {
    test();
    return 0;
}
