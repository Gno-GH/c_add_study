#include<iostream>
using namespace std;
void ver(int *i)
{
	int static n = 1;
	n++;
	i = &n;
	return ;
}
int main()
{
	int *p;
	cout<<"0000"<<endl;
	ver(p);
	*p++;
	cout<<*p<<endl;
	ver(p);
	cout<<*p<<endl;
	return 0;
}
