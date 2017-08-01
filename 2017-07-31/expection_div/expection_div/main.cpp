//
//  main.cpp
//  expection_div
//
//  Created by Gno on 2017/7/31.
//  Copyright © 2017年 Gno. All rights reserved.
//

#include <iostream>
using namespace std;
class Exp
{
public:
    void fun(){}
    Exp()
    {
        cout<<"Exp 构造"<<endl;
    }
    ~Exp()
    {
        cout<<"Exp 析构"<<endl;
    }
};
void fun()
{
    throw 'a';
}
void test1()
{
    try
    {
        Exp e;
        e.fun();
        throw 0;
    }
    catch(...)
    {
        cout<<"0/0 exception"<<endl;
    }
}
void test2()
{
    try {
        fun();
    } catch (char *) {
        cout<<"char* exception"<<endl;
    } catch(char) {
        cout<<"char exception"<<endl;
    }
}
int main(int argc, const char * argv[]) {
    test1();
    return 0;
}
