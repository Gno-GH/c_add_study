#include <iostream>
#include<memory>
using namespace std;
int main()
{
    auto_ptr<string> c(new string("abc"));
    auto_ptr<string> d;
    d = c;
    // cout<<*c<<endl; error segmentation fault
    cout<<*d<<endl;
    // unique_ptr<int> a(new int(11)); temp tynamic memory 
    // unique_ptr<int> b; can use of new []
    // b = a; this is error don't allow 
    // shared_ptr money point use 
    return 0;
}
