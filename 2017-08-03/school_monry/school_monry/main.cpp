//
//  main.cpp
//  school_monry
//
//  Created by Gno on 2017/8/3.
//  Copyright © 2017年 Gno. All rights reserved.
//
/*
 某学校对教师每月工资的计算公式如下：固定工资+课时补贴。
 教授的固定工资为5000元,每个课时补贴50元；
 副教授的固定工资为3000元,每个课时补贴30元;
 讲师的固定工资为2000元,每个课时补贴20元。
 定义教师抽象类,派生不同职称的教师类,编写程序求若干教师的月工资。
 */
#include <iostream>
using namespace std;
class Teacher
{
public:
    virtual int getFixed()=0;
    virtual int getSubsidize()=0;
    virtual ~Teacher(){}
};
class Professor:public Teacher
{
public:
    int getFixed(){return 5000;}
    int getSubsidize(){return 50;}
};
class Aprofessor:public Teacher
{
public:
    int getFixed(){return 3000;}
    int getSubsidize(){return 30;}
};
class Lecturer:public Teacher
{
public:
    int getFixed(){return 2000;}
    int getSubsidize(){return 20;}
};
void test()
{
    Teacher* t[3] = {new Professor(),new Aprofessor(),new Lecturer()};
    int i = 0;
    int sum = 0;
    while(i<3)
    {
        sum+=t[i]->getFixed()+t[i]->getSubsidize()*30;
        i++;
    }
    cout<<"总工资:"<<sum<<endl;
}
int main(int argc, const char * argv[]) {
    test();
    return 0;
}
