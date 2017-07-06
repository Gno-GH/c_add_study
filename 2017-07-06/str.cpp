#include <iostream>
#include<string>
using namespace std;
int main()
{
    string s1("Hellow");
    cout<<"s1 "<<s1<<endl;
    string *s2= new string(10,'S');
    cout<<"s2 "<<s2<<endl;
    string s3(s1);
    cout<<"s3 "<<s3<<endl;
    string s4(*s2,3);
    cout<<"s4 "<<s4<<endl;
    char s[] = "abcdef";
    string s5(s+0,s+4);
    cout<<"s5 "<<s5<<endl;
    cout<<string::npos<<endl;
    //measure s2's memary
    cout<<s2->capacity()<<endl;
    delete s2;
    return 0;
}
