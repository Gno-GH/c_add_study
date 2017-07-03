#include <iostream>
using namespace std;
typedef struct a
{
    int n;
    mutable int cn;
}A;
int main()
{
    const A aa{1,2};
    cout<<"cn :"<<aa.cn<<endl;
    aa.cn = 50;
    cout<<"change cn :"<<aa.cn<<endl;
    return 0;
}
