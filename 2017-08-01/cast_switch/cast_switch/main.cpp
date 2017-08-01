//
//  main.cpp
//  cast_switch
//
//  Created by Gno on 2017/8/1.
//  Copyright © 2017年 Gno. All rights reserved.
//

#include <iostream>
using namespace std;
class A
{
public:
    void fun()
    {
        cout<<"A"<<endl;
    }
};
class B:public A
{
public:
    void func()
    {
        cout<<"B"<<endl;
    }
};
void test()
{
    A *a = new A;
    B *b = new B;
    A& ap = *a;
    B& bp = *b;
    //静态强转 指针
    a = static_cast<A*>(b);
    b = static_cast<B*>(a);//unsafe
    //静态强转 引用
    ap = static_cast<A&>(bp);
    bp = static_cast<B&>(ap);//unsafe
    //动态强转 指针
    a = dynamic_cast<B*>(b);
    //b = dynamic_cast<A*>(a); error
    //动态强转 引用
    ap = dynamic_cast<A&>(bp);
    //bp = dynamic_cast<B&>(ap); error
}
int main(int argc, const char * argv[]) {
    test();
    return 0;
}
