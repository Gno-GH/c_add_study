#include<iostream>
#include"dog.h"
using namespace std;
Dog::Dog()
{
    age = 10;
    cout<<"please input dog name"<<endl;
    cin>>name;
    color =Dog::color_s(2);
}
Dog::~Dog()
{
    cout<<"This object free"<<endl;
}
void Dog::print()
{
    cout<<"This Dog age is :"<<age<<endl;
    cout<<"This Dog color is:"<<(int)color<<endl;
    cout<<"This Dog name is:"<<name<<endl;
    return ;
}
void Dog::setColor(color_s cs)
{
    color = cs;
    return ;
}
