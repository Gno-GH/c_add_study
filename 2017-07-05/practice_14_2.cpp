#include <iostream>
using namespace std;
class Frabjobs
{
private :
    string fab;
public :
    int con;
    static int ct;
    Frabjobs(const string s = "C++" ) : fab(s){
        ct++;
        cout<<"Siht "<<ct<<endl;
    }
    ~Frabjobs(){
        ct--;
        cout<<"This "<<ct<<endl;
    }
    virtual void tell(){cout<<fab;}
};
int Frabjobs::ct = 0;
class Gloam
{
private :
    int glip;
    Frabjobs fb;
public :
    Gloam(int g=0,const char *s="c++");
    Gloam(int g,const Frabjobs &f);
    void printcon();
    void tell();
};
Gloam::Gloam(int g,const char *s)
{
    Frabjobs f(s);
    f.con = 11;
    fb =f;
    glip = g;
}
Gloam::Gloam(int g,const Frabjobs &f)
{
    fb =f;
    glip = g;
}
void Gloam::tell()
{
    fb.tell();
    cout<<glip<<endl;
}
void Gloam::printcon()
{
    cout<<"This con value:"<<fb.con<<endl;
}
int main()
{
    Gloam g(11,"C++a");
    g.tell();
    g.printcon();
    return 0;
}
