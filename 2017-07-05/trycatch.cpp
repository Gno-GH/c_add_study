#include <iostream>
#include<cstring>
using namespace std;
void f(int b)
{
    if(b==0)throw "This is Exception";
    return ;
}
int main()
{
    int b;
    cin>>b;
    try{
        f(b);
    }catch(const char *s)
    {
        cout<<"B is zero"<<endl;
        cout<<strlen(s)<<endl;
        cout<<s<<endl;
    }
    return 0;
}
