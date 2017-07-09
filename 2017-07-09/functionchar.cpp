#include <iostream>
#include<algorithm>
#include<list>
using namespace std;
template<class T>
class TooBig
{
private :
    T item;
public :
    TooBig(const T &t):item(t){}
    bool operator()(const T &v){return v>item;}
};
void show(const int &i){cout<<i<<endl;}
using namespace std;
int main()
{
    list<int> ls{1,2,3,4,5,6,7,8,9,10};
    TooBig<int> tb(6);
    ls.remove_if(tb);
    for_each(ls.cbegin(),ls.cend(),show);
    return 0;
}
