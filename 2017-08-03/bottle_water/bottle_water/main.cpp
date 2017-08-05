//
//  main.cpp
//  bottle_water
//
//  Created by Gno on 2017/8/3.
//  Copyright © 2017年 Gno. All rights reserved.
//

#include <iostream>
using namespace std;
class Bottle
{
public:
    int m_Max;
    int m_Size;
public:
    Bottle(int max,int size):m_Max(max),m_Size(size){}
    
};
void test()
{
    Bottle b_five(5,0);
    Bottle b_six(6,0);
    while(b_five.m_Size!=4)
    {
        cout<<"装满"<<b_six.m_Max<<"升的容器"<<endl;
        b_six.m_Size = b_six.m_Max;
        cout<<"倒入"<<b_five.m_Max<<"升的容器"<<endl;
        b_six.m_Size -= (b_five.m_Max-b_five.m_Size);
        b_five.m_Size = b_five.m_Max;
        cout<<"倒空"<<b_five.m_Max<<"升的容器"<<endl;
        b_five.m_Size = 0;
        cout<<"将"<<b_six.m_Max<<"升的容器"<<"倒入"<<b_five.m_Max<<"升的容器"<<endl;
        b_five.m_Size = b_six.m_Size;
        b_six.m_Size = 0;
        cout<<b_five.m_Max<<"升的容器中有"<<b_five.m_Size<<"升"<<endl;
        cout<<"------------------------------------"<<endl;
    }
}
int main(int argc, const char * argv[]) {
    test();
    return 0;
}
