#include <iostream>
#include<algorithm>
#include<list>
using namespace std;
void show(const int &i){cout<<i<<endl;}
int main()
{
    list<int> l1;
    l1.push_back(11);
    l1.push_back(22);
    l1.push_back(33);
    cout<<"l1:"<<endl;
    for_each(l1.begin(),l1.end(),show);
    list<int> l2;
    cout<<"l1 And l2:"<<endl;
    l2.merge(l1);
    l2.push_back(44);
    for_each(l2.begin(),l2.end(),show);
    l2.push_front(55);
    cout<<"sort:"<<endl;
    l2.sort();
    for_each(l2.begin(),l2.end(),show);
    return 0;
}
