#include <iostream>
using namespace std;
int main()
{
    const int a =10;
    int *p = const_cast<int*>(&a);
    *p = 20;
    cout<<a<<endl;
    return 0;
}
