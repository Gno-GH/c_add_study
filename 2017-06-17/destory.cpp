#include <iostream>
using namespace std;
class  Dog
{
public :
    static int number;
    int m_data;
    Dog(int data=1);
    ~Dog();
    friend ostream & operator <<(ostream &os,const Dog &d);
};
int Dog::number =  0;
Dog::Dog(int data)
{
    number++;
    m_data = data;
}
Dog::~Dog()
{
    number--;
    cout<<"number :"<<number<<endl;
}
ostream & operator<<(ostream &os,const Dog &d)
{
    cout<<"This Dog's data is :"<<d.m_data<<endl;
    return os;
}
void show1(Dog d)
{
    cout<<d<<endl;
    cout<<"don't &"<<endl;
    return ;
}
void show2(Dog &d)
{
    cout<<d<<endl;
    cout<<"is &"<<endl;
    return ;
}
int main()
{
    {
        Dog d1(1),d2(2),d3(3);
       show1(d1);
       show2(d2);
    }
    return 0;
}
