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
    friend void reports(Anl<T> &t);
};
template<class T>
int Anl<T>::ct = 0;
    template<class T>
void couts()
{
    cout<<"This is couts print:"<<endl;
    cout<<sizeof(Anl<T>)<<endl;
    cout<<Anl<T>::ct<<endl;
}
    template<class T>
void reports(Anl<T> &t)
{
    cout<<t.item<<endl;
    return ;
}
int main()
{
    Anl<int> int_1(1);
    Anl<int> int_2(2);
    Anl<int> int_3(3);
    couts<int>();
    Anl<double> dou_1(1.1);
    Anl<double> dou_2(2.1);
    couts<double>();
    return 0;
}
