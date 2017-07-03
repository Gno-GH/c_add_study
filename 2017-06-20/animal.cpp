#include <iostream>
#include"animal.h"
Animal::Animal(int age,string &color)
{
    m_age = age;
    m_color = color;
}
Animal::~Animal(){}
void Animal::saySome()
{
    cout<<"Ha Ha Ha Animal"<<endl;
}
void Animal::setColor(string &color)
{
    m_color = color;
}
Dog::Dog(int age,string &color,float weight):Animal(age,color)
{
    m_weight = weight;
}
Dog::~Dog(){}
void Dog::saySome()
{
    cout<<"Ha Ha weight :"<<m_weight<<endl;
    return ;
}
