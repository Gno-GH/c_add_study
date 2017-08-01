//
//  main.cpp
//  virtual_function
//
//  Created by Gno on 2017/7/28.
//  Copyright © 2017年 Gno. All rights reserved.
//

#include <iostream>
using namespace std;
class A
{
public:
    virtual void fun()
    {
        cout<<"A fun"<<endl;
    }
};
class B:public A
{
public:
    virtual void fun()
    {
        cout<<"B fun"<<endl;
    }
};
int main(int argc, const char * argv[]) {
    B b;
    func(b);
    cout<<sizeof(b)<<endl;
    return 0;
}
