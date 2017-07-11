#include <iostream>
#include<sstream>
using namespace std;
int main()
{
    //流格式化输出 格式化输入
    int val = 512;
    stringstream ss;
    ss<<val<<endl;
    string s = ss.str();
    cout<<s;
    int a;
    ss<<"ostringstream";
    ss>>a>>s;
    cout<<a<<endl;
    cout<<s<<endl;
    return 0;
}
