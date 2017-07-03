#include <iostream>
using namespace std;
class Dog
{
public :
    Dog();
    ~Dog();
    void say();
    void say(int i) const;
};
Dog::Dog(){}
Dog::~Dog(){}
void Dog::say()
{
cout<<"hahahaha"<<endl;
}
void Dog::say(int i) const
{
    cout<<"hahaha"<<i<<endl;
}
int main()
{
    Dog *d = new Dog;
    d->say();
    d->say(11);
    delete d;
    return 0;
}
