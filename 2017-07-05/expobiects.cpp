#include <iostream>
using namespace std;
class Exp_1
{
public :
    Exp_1(){}
    void print(){cout<<"This is EXP_1"<<endl;}
};
class Exp_2
{
public :
    Exp_2(){}
    void print(){cout<<"This is EXP_2"<<endl;}
};
void ex_1(int b);
void ex_2(int b);
int main()
{
    int b;
    cin>>b;
    try{
        ex_1(b);
        ex_2(b);
    }
    catch(Exp_1 &ex)
    {
        ex.print();
    }
    catch(Exp_2 &ex)
    {
        ex.print();
    }
    return 0;
}
void ex_1(int b)
{
    if(b==0)throw Exp_1();
    return ;
}
void ex_2(int b)
{
    if(b==2)throw Exp_2();
    return ;
}
