#include<iostream>
using namespace std;
struct jobs
{
		int i;
		int n;
};
template <typename T>
void Swap(T &a,T &b);
template <>void Swap<jobs>(jobs &a,jobs &b);
int main()
{
		jobs a{1,1},b{2,2};
		Swap(a,b);
		cout<<"a :"<<a.i<<"\t"<<a.n<<endl;
		cout<<"b :"<<b.i<<"\t"<<b.n<<endl;
		return 0;
}
		template <typename T>
void Swap(T &a,T &b)
{
		T t;
		t = a;
		a = b;
		b = t;
		return ;
}
template <>void Swap<jobs>(jobs &a,jobs &b)
{
		Swap(a.i,b.i);
		Swap(a.n,b.n);
		return ;
}
