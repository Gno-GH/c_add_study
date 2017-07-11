#include <iostream>
#include<fstream>
using namespace std;
int main()
{
    cout<<cout.goodbit<<endl;
    cout<<cout.failbit<<endl;
    cout<<cout.badbit<<endl;
    cout<<cout.eofbit<<endl;
    cout<<"io good:"<<cout.good()<<endl;
    cout<<"io bad:"<<cout.bad()<<endl;
    cout<<"io eof:"<<cout.eof()<<endl;
    cout<<"io fail:"<<cout.fail()<<endl;
    cout<<"enter:"<<endl;
    cout<<"empty:"<<ends<<"empty"<<endl;
    cout<<"fulsh:"<<flush<<endl;
    cin.tie(&cout);
    int i;
    cin>>i;
    cout<<endl;
    cin.tie(nullptr);
    ifstream in("./log",ifstream::in);
    ofstream out("./logr",ofstream::out);
    string s;
    while(in>>s)
    {
        cout<<s<<endl;
        out<<s<<endl;
    }
    in.close();
    out.close();
    return 0;
}
