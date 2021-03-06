#include <iostream>
using namespace std;
template<class T> void couts();
template<class T> void reports(T &);
template<class T>
class Anl
{
private :
    T item;
    static int ct;
public :
    Anl(const T &i):item(i){ct++;}
    ~Anl(){ct--;}
    friend void couts<T>();
    template<class C,class D> friend void show(C &c,D &d);
};
template<class T>
int Anl<T>::ct = 0;
//非约束友元函数
template<class C,class D> void show(C &c,D &d)
{
    cout<<"-----------------"<<endl;
    cout<<c.item<<endl;
    cout<<d.item<<endl;
    return ;
}
//约束友元函数
    template<class T>
void couts()
{
    cout<<"This is couts print:"<<endl;
    cout<<sizeof(Anl<T>)<<endl;
    cout<<Anl<T>::ct<<endl;
    return ;
}
int main()
{
    Anl<int> int_1(1);
    Anl<int> int_2(2);
    Anl<int> int_3(3);
    couts<int>();//约束友元
    Anl<double> dou_1(1.1);
    Anl<double> dou_2(2.1);
    couts<double>();//约束友元
    show(int_1,dou_1);//非约束友元
    return 0;
}
