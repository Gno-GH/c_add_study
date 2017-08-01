//
//  main.cpp
//  init_list
//
//  Created by Gno on 2017/7/24.
//  Copyright © 2017年 Gno. All rights reserved.
//
#include <iostream>
using namespace std;
class Dog
{
    public :
    int m_a;
    int m_b;
    int m_c;
    Dog(int a,int b,int c):m_a(a){}
    Dog(const Dog&d)
    {
        cout<<"aaaa"<<endl;
    }
    void show()
    {
        cout<<m_b<<endl;
    }
};
int main(int argc, const char * argv[]) {
    Dog d(1,2,3);
    Dog f(4,5,6);
    f = d;
    return 0;
}
