//
//  main.cpp
//  stl_trans
//
//  Created by Gno on 2017/8/7.
//  Copyright © 2017年 Gno. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
//#include <functional>
using namespace std;
class OldWang
{
public:
    int m_Age;
    OldWang(){m_Age = 11;}
    OldWang(int age):m_Age(age){}
    bool operator==(OldWang *o) const
    {
        return o->m_Age == m_Age;
    }
};
class OldWangCheck:public binary_function<OldWang*, OldWang*, bool>
{
public:
    bool operator()(OldWang *o1,OldWang *o2)const
    {
        return o1->m_Age==o2->m_Age;
    }
};
class Print
{
public:
    int operator()(int va1,int va2)
    {
        if(!va2)
            return va1+va2;
        return va1;
    }
    void operator()(int val)
    {
        cout<<val<<endl;
    }
};
void test1()
{
    vector<int> v1,v2;
    for(int i = 0;i<10;++i)
    {
        if(i<3)v2.push_back(i+5);
        v1.push_back(i);
    }
    vector<int> v3;
    v3.resize(v1.size());
    transform(v1.begin(), v1.end(), v2.begin(), v3.begin(),Print());
    for_each(v3.begin(), v3.end(), Print());
}
void test2()
{
    vector<OldWang*> vos;
    OldWang o(11);
    vos.push_back(&o);
    vector<OldWang*>::iterator it = find(vos.begin(),vos.end(),&o);
    if(it!=vos.end())cout<<(*it)->m_Age<<endl;
    it = find_if(vos.begin(), vos.end(), bind2nd(OldWangCheck(),&o));
    if(it!=vos.end())cout<<(*it)->m_Age<<endl;
}
int main(int argc, const char * argv[]) {
    //test1();
    test2();
    return 0;
}
