#pragma once
#include<string>
using namespace std;
class Animal
{
private :
    int m_age;
    string m_color;
public :
    Animal(int age,string &color);
    virtual ~Animal();
    int getAge(){return m_age;}; 
    void setColor(string &color);
    virtual void saySome();
};
class Dog :public Animal
{
private :
    float m_weight;
public :
    Dog(int age,string &color,float weight);
    ~Dog();
    virtual void saySome();
};
