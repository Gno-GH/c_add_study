#include <iostream>
#include<algorithm>
#include<vector>
#include<functional>
#include<string>
#include<COLOR>
using namespace std;
bool cmp(const string &s1,const string &s2)
{
    return s1.size()>s2.size();
}
bool cmpr(const string &s1,const string &s2)
{
    return s1.size()<s2.size();
}
int main()
{
    YELLOW
    vector<string> strs = {"aa","bb","cccc","ddd","eee"};
    cout<<"去除长度不大于第二个元素的字符串:"<<endl;
    auto ato = bind(cmp,std::placeholders::_1,strs[1]);
    auto ito = find_if(strs.begin(),strs.end(),ato);
    sort(strs.begin(),strs.end(),cmpr);
    for_each(ito,strs.end(),[](const string &s){cout<<s<<"  ";});
    cout<<endl<<"引用参数使用ref()函数"<<endl;
    NOCOLOR
    return 0;
}
