#include<iostream>
using namespace std;
namespace own
{
	int age;
	int number;
}
int age =100;
int main()
{
//	int age =99;
	using own::age;
	age = 11;
	cout<<own::age<<endl;
	cout<<::age<<endl;
	own::number=22;
	cout<<own::number<<endl;
	return 0;
}
