//
//  main.cpp
//  vtrial_many
//
//  Created by Gno on 2017/7/30.
//  Copyright © 2017年 Gno. All rights reserved.
//

#include <iostream>
using namespace std;
class Animal
{
public:
    virtual void eat()
    {
        cout<<"Animal Eat"<<endl;
    }
    void speak()
    {
        cout<<"Animal Speak"<<endl;
    }
};
class Dog : public Animal
{
public:
    void eat()
    {
        cout<<"Dog Eat"<<endl;
    }
    void speak()
    {
        cout<<"Dog Speak"<<endl;
    }
};
void eat(Animal& anl)
{
    anl.eat();
}
void speak(Animal& anl)
{
    anl.speak();
}
void test()
{
    Dog d;
    eat(d);
    speak(d);
}
int main(int argc, const char * argv[]) {
    test();
    return 0;
}
