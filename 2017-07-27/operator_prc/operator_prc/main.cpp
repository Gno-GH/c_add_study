//
//  main.cpp
//  operator_prc
//
//  Created by Gno on 2017/7/27.
//  Copyright © 2017年 Gno. All rights reserved.
//

#include <iostream>
#include "OldWang.hpp"
#include "SmartPoint.hpp"
using namespace std;
OldWang operator+(OldWang& ow1,OldWang& ow2)
{
    OldWang ow ;
    cout<<"老王使用了 全局+"<<endl;
    ow.setAge(ow1.getAge()+ow2.getAge());
    return ow;
}
ostream& operator<<(ostream &cout,OldWang &ow)
{
    cout<<"老王的年龄是 :"<<ow.m_Age;
    return cout;
}
int main(int argc, const char * argv[]) {
    OldWang ow1,ow2,ow3;
    ow1.setAge(20);
    ow2.setAge(20);
    ow3 = ow1+ow2;
    ow1.setName((char *)"goudan");
    ow2.setName((char *)"goudan");
    ow3.setName((char *)"gousheng");
    cout<<ow3<<endl;
    --ow3;
    cout<<ow3<<endl;
    SmartPoint sp(new OldWang);
    cout<<"老王使用了智能指针 ->"<<sp->getAge()<<endl;
    cout<<"老王使用了智能指针 *"<<(*sp).getAge()<<endl;
    bool b = ow1==ow2;
    cout<<b<<endl;
    b = ow1!=ow2;
    cout<<b<<endl;
    ow1(ow3);
    cout<<endl;
    return 0;
}
