#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<COLOR>
using namespace std;
void showValue(const string &i)
{
    cout<<i<<" ";
    return ;
}
bool cmp(const string &s1,const string &s2)
{
    return s1.size()<s2.size();
}
bool fi(const string &s)
{
    return s.size()>3;
}
int main()
{
    vector<string> strs;
    strs.push_back(string("bcd"));
    strs.push_back(string("abc"));
    strs.push_back(string("edfg"));
    strs.push_back(string("cde"));
    strs.push_back(string("abcd"));
    strs.push_back(string("abbb"));
    strs.push_back(string("bcd"));
    strs.push_back(string("abc"));
    strs.push_back(string("cdr"));
    strs.push_back(string("abc"));
    strs.push_back(string("bcd"));
    GREEN;
    cout<<"原串:"<<endl;
    for_each(strs.begin(),strs.end(),showValue);
    cout<<endl;
    sort(strs.begin(),strs.end());
    cout<<"字典序升序:"<<endl; 
    for_each(strs.begin(),strs.end(),showValue);
    cout<<endl;
    cout<<"重复数据后移 返回非重复结束指针:"<<endl;
    auto del = unique(strs.begin(),strs.end());
    for_each(strs.begin(),strs.end(),showValue);
    cout<<endl;
    cout<<"去除重复数据:"<<endl;
    strs.erase(del,strs.end());
    for_each(strs.begin(),strs.end(),showValue);
    cout<<endl;
    cout<<"按长度重排:"<<endl;
    stable_sort(strs.begin(),strs.end(),cmp);
    for_each(strs.begin(),strs.end(),showValue);
    cout<<endl;
    cout<<"find_if 测试:"<<endl;
    auto ato = find_if(strs.begin(),strs.end(),fi);
    cout<<*ato<<endl;
    cout<<"lambda 测试:"<<endl;
    auto f = [](int a,int b){return a+b;};
    cout<<f(1,2)<<endl;
    cout<<"find_if 使用 lambda表达式:"<<endl;
    auto fin = [strs](const string &s){return s.size()>strs[0].size();};
    ato = find_if(strs.begin(),strs.end(),fin);
    cout<<*ato<<endl;
    NOCOLOR;
    return 0;
}
