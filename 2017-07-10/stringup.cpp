#include<iostream>
#include<algorithm>
#include<string>
#include<cctype>
using namespace std;
void stringUp(string &s)
{
    transform(s.begin(),s.end(),s.begin(),(int(*)(int))tolower);
    return ;
}
int main()
{
    string str = "Hellow HAHA!";
    stringUp(str);
    cout<<str<<endl;
    cout<<"---------"<<endl;
    for(auto c:str)
        cout<<c<<endl;
    cout<<decltype(stringUp(str))==int<<endl;
    return 0;
}
