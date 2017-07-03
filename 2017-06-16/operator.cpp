#include <iostream>
using namespace std;
class Time
{
public :
    int m_hour;
    int m_minute;
    int m_second;
    Time();
    Time(int hour,int minute,int second);
    ~Time();
    Time operator+(const Time &t);
    void show();
};
Time::~Time()
{
    cout<<"end "<<m_hour<<endl;
}
Time::Time(int hour,int minute,int second)
{
    m_hour = hour;
    m_minute = minute;
    m_second = second;
}
Time Time::operator+(const Time &t)
{
    m_hour+=t.m_hour;
    m_minute+=t.m_minute;
    m_second+=t.m_second;
    return *this;
}
void Time::show()
{
    cout<<"Time sum:"<<endl;
    cout<<m_hour<<":"<<m_minute<<":"<<m_second<<endl;
    return ;
}
int main()
{
    Time a(1,1,1),b(2,2,2);
    a=a+b;
    a.show();
    return 0;
}
