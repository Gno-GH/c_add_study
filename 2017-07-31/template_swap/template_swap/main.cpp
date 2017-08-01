//
//  main.cpp
//  template_swap
//
//  Created by Gno on 2017/7/31.
//  Copyright © 2017年 Gno. All rights reserved.
//

#include <iostream>
using namespace std;
class Dog
{
public:
    int age;
};
template<class T>
void Swap(T& a,T& b)
{
    a = a^b;
    b = a^b;
    a = a^b;
}
template<> void Swap<Dog>(Dog& a,Dog& b)
{
    a.age = a.age ^ b.age;
    b.age = a.age ^ b.age;
    a.age = a.age ^ b.age;
}
void test1()
{
    Dog d1,d2;
    d1.age = 11;
    d2.age = 22;
    Swap(d1,d2);
    cout<<"D1 age "<<d1.age<<endl;
    cout<<"D2 age "<<d2.age<<endl;
}
int main(int argc, const char * argv[]) {
    test1();
    return 0;
}
