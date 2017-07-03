#include <iostream>
using namespace std;
class Time
{
public :
    int n;
    int m;
    Time();
    ~Time();
    friend ostream & operator<<(ostream &os,Time &t);
};
Time::~Time(){}
Time::Time(){}
ostream & operator<<(ostream &os,Time &t)
{
    cout<<t.n<<endl;
    cout<<t.m<<endl;
    return os;
}
int main()
{
    Time t;
    t.n = 2;
    t.m = 3;
    cout<<t<<t;
    return 0;
}
