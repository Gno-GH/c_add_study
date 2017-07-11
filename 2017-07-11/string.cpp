#include <iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i = 0;
    string sc = s;
    cout<<s<<endl;
    while(i<(int)s.length())
    {
        s[i]='X';
        i++;
    }
    cout<<s<<endl;
    return 0;
}
