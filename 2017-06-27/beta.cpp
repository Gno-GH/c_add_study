#include <iostream>
using namespace std;
template <typename T>
class Bate
{
private :
    template <typename V>
        class hold;
    hold<T> q;
    hold<int> n;
public :
    Bate(T t,int i):q(t),n(i){}
    template<typename U>
        U blab(U u,T t);
    void show() const{q.show();n.show();}
};
template <typename T>
template<typename V>
class Bate<T>::hold
{
private :
    V val;
public :
    hold(V v):val(v){}
    void show(){cout<<val<<endl;}
};
template <typename T>
    template<typename U>
U Bate<T>::blab(U u,T t)
{
    return u+t;
}
int main()
{
    return 0;
}
