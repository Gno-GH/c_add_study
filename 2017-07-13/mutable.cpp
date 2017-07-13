#include <iostream>
#include<algorithm>
#include<COLOR>
using namespace std;
int main()
{
    YELLOW;
    int i = 0;
    auto ato = [&]()mutable{return ++i;};
    cout<<ato()<<endl;
    cout<<"指定返回值类型:"<<endl;
    auto act = [=]()->char{if(i)return 'A';else return 'B';};
    cout<<i<<"   "<<act()<<endl;
    NOCOLOR;
}
