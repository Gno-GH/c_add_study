#include<iostream>
#include"stockfile.h"
using namespace std;
Stock::Stock()
{
	sex = 1;
	age = 22;
	number = 9;
	cout<<"Init"<<endl;
}
Stock::Stock(int sex_,int age_,int number_)
{
    sex = sex_;
    age = age_;
    number = number_;
}
Stock::~Stock()
{
	cout<<"Xi Gou"<<endl;
}
void Stock::show()
{
	cout<<"sex "<<sex<<endl;
	cout<<"age "<<age<<endl;
	cout<<"number "<<number<<endl;
}
