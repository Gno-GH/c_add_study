//
//  Dog.hpp
//  template_file
//
//  Created by Gno on 2017/7/31.
//  Copyright © 2017年 Gno. All rights reserved.
//

#ifndef Dog_hpp
#define Dog_hpp
#include <iostream>
#include <string>
using namespace std;
template<class T> class Dog;
template<class T> void func(Dog<T> d,int);
template<class T>
class Dog
{
    friend void func(Dog<T> d)
    {
        d.fun(1);
    }
    friend void func<>(Dog<T> d,int);
public:
    void fun()
    {
        cout<<"lao wang foolish"<<endl;
    }
private:
    void fun(int)
    {
        cout<<"lao wang private fun"<<endl;
    }
};
template<class T>
void func(Dog<T> d,int)
{
    d.fun(1);
}
#endif /* Dog_hpp */
