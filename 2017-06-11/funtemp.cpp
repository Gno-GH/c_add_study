#include<iostream>
using namespace std;
template <class T>
void Swap(T &a,T &b);
int main()
{
		int n,m;
		double a,b;
		cout<<"please input n,m:"<<endl;
		cin>>n>>m;
		Swap(n,m);
		cout<<"n :"<<n<<"\tm :"<<m<<endl;
		cout<<"please input a,b:"<<endl;
		cin>>a>>b;
		Swap(a,b);
		cout<<"a :"<<a<<"\tb :"<<b<<endl;
		return 0;
}
template <class T>
void Swap(T &a,T &b)
{
		T c;
		c=a;
		a=b;
		b=c;
		return ;
}
