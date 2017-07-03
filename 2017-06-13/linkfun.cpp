#include<iostream>
using namespace std;
static void swap(int &a,int &b)
{
	a = b;
	return ;
}
int main()
{
	int a =1;
	int b =2;
	swap(a,b);
	cout<<"a :"<<a<<endl;
	return 0;
}
