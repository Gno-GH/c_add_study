//
//  main.cpp
//  stl_work
//
//  Created by Gno on 2017/8/4.
//  Copyright © 2017年 Gno. All rights reserved.
//
/*
 ​有5名选手：选手ABCDE，10个评委分别对每一名选手打分，去除最高分，去除评委中最低分，取平均分。
 ​//1. 创建五名选手，放到vector中
 ​//2. 遍历vector容器，取出来每一个选手，执行for循环，可以把10个评分打分存到deque容器中
 ​//3. sort算法对deque容器中分数排序，pop_back pop_front去除最高和最低分
 ​//4. deque容器遍历一遍，累加分数，累加分数/d.size()
 ​//5. person.score = 平均分
*/
#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
using namespace std;
class Person
{
public:
    Person(double score):m_Score(score){}
    double getScore(){return m_Score;}
private:
    double m_Score;
};
bool cmp(Person& p1,Person& p2)
{
    return p1.getScore()<p2.getScore();
}
void print(Person& p)
{
    cout.setf(ios_base::left);
    cout.width(3);
    cout<<p.getScore();
}
void test()
{
    vector<Person> vps;
    vps.push_back(Person(10));
    vps.push_back(Person(1));
    vps.push_back(Person(9));
    vps.push_back(Person(7));
    vps.push_back(Person(8));
    sort(vps.begin(),vps.end(),cmp);
    for_each(vps.begin(), vps.end(), print);
    cout<<endl;
    deque<Person> dps(vps.begin(),vps.end());
    dps.pop_front();
    dps.pop_back();
    for_each(dps.begin(), dps.end(), print);
    cout<<endl;
    double avg = 0;
    for(auto at=dps.begin();at!=dps.end();++at)
        avg+=(*at).getScore()/dps.size();
    cout<<avg<<endl;
}
int main(int argc, const char * argv[]) {
    test();
    return 0;
}
