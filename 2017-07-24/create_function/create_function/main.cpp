//
//  main.cpp
//  create_function
//
//  Created by Gno on 2017/7/24.
//  Copyright © 2017年 Gno. All rights reserved.
//
#include <iostream>
using namespace std;
class MyClass
{
    public :
    MyClass()
    {
        cout<<"默认构造函数"<<endl;
    }
    
    MyClass(int a)
    {
        cout<<"有参构造函数"<<endl;
    }
    
    MyClass(const MyClass& m)
    {
        cout<<"赋值构造函数"<<endl;
    }
    
    ~MyClass()
    {
        cout<<"析构函数"<<endl;
    }
};
MyClass fun()
{
    MyClass mc;
    return mc;
}
int main(int argc, const char * argv[]) {
    MyClass mc1(10);
    MyClass(mc2);
    MyClass mc3 = MyClass();
    MyClass mc4 = 11;
    MyClass mc5 = MyClass(mc3);
    MyClass mc6 = MyClass(10);
    MyClass mc7 = fun();
    return 0;
}
