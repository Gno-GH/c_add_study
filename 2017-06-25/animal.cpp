#include <iostream>
using namespace std;
class Animal
{
private :
    int age;
public :
    int color;
    Animal(int agel);
    ~Animal();
   friend ostream & operator<<(ostream &os,const Animal anl);
};
class Dog : private Animal
{
public :
    using Animal::color;
    explicit Dog(int d);
    Dog(int agel,int d);
    ~Dog();
    void print();
};
Animal::Animal(int agel):age(agel){}
Animal::~Animal(){}
ostream & operator<<(ostream &os,const Animal anl)
{
    cout<<anl.age<<endl;
    return os;
}
Dog::~Dog(){}
Dog::Dog(int agel,int d):Animal(agel){}
void Dog::print(){}
int main()
{
    return 0;
}
