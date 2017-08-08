//
//  main.cpp
//  stl_object
//
//  Created by Gno on 2017/8/7.
//  Copyright © 2017年 Gno. All rights reserved.
//

#include <iostream>
#include <functional>
using namespace std;
class Person
{
public:
    Person()
    {
        cont = 0;
    }
    void fun()
    {
        ++cont;
    }
    bool operator<(const Person &p) const
    {
        return this->cont<p.cont;
    }
    int cont;
};
int main(int argc, const char * argv[]) {
    Person p1,p2;
    p1.fun();
    p1.fun();
    p2.fun();
    less<Person> pf;
    cout<<pf(p1,p2)<<endl;
    return 0;
}
