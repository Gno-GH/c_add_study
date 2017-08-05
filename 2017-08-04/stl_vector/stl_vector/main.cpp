//
//  main.cpp
//  2017-08-04
//
//  Created by Gno on 2017/8/4.
//  Copyright © 2017年 Gno. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void print(vector<int> &vt)
{
    for(vector<int>::iterator begin = vt.begin();begin!=vt.end();begin++)
    {
        cout.width(4);
        cout.setf(ios_base::left);
        cout<<*begin;
    }
    cout<<endl;
}
void test1()
{
    vector<vector<int>> vts;
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    
    for(int i = 0;i<8;++i)
    {
        v1.push_back(i);
        v2.push_back(i+10);
        v3.push_back(i+100);
    }
    
    vts.push_back(v1);
    vts.push_back(v2);
    vts.push_back(v3);
    
    for_each(vts.begin(), vts.end(), print);
}
void test2()
{
    vector<int> v;
    for(int i = 0;i<100000;i++)
    {
        v.push_back(i);
    }
    cout<<"capacity:"<<v.capacity()<<endl;
    cout<<"size:"<<v.size()<<endl;
    //此时 通过resize改变容器大小
    v.resize(10);
    cout<<"capacity:" << v.capacity() << endl;
    cout<<"size:" << v.size() << endl;
    //容量没有改变
    vector<int>(v).swap(v);
    cout<<"capacity:" << v.capacity() << endl;
    cout<<"size:" << v.size() << endl;
    cout<<v.at(11)<<endl;
}
void test3()
{
    vector<int> v;
    v.reserve(10);
    int *p = NULL;
    int count = 0;
    for(int i = 0;i<10;++i)
    {
        v.push_back(i);
        if(p != &v[2])
        {
            p = &v[2];
            count++;
        }
    }
    cout<<count<<endl;
    cout<<v.capacity()<<endl;
    cout<<v.size()<<endl;
    cout<<v[2]<<endl;
    cout<<*p<<endl;
}
int main(int argc, const char * argv[]) {
    //test1();
    //test2();
    test3();
    return 0;
}
