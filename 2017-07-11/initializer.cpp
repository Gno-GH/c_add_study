#include <iostream>
using namespace std;
void fun(initializer_list<int> li)
{
    initializer_list<int>::iterator it = li.begin();
    while(it!=li.end())
        cout<<*it++<<endl;
    return ;
}
int main()
{
    fun({1,2,3,4});
    return 0;
}
