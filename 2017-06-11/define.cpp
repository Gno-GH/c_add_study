#include<iostream>
using namespace std;
void fun(int i,int j=1);
int main()
{
		int i,j;
		cin>>i;
		cin>>j;
		fun(i);
		cout<<"Define :"<<endl;
		fun(i,j);
		return 0;
}
void fun(int i,int j)
{
		cout<<"i = :"<<i<<endl;
		cout<<"j = :"<<j<<endl;
		return ;
}
