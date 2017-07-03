#include<iostream>
using namespace std;
int main()
{
		int *pint = new int;
		double *pdouble = new double;
		*pint = 15;
		*pdouble = 25.5;
		cout<<pint<<"save value is :"<<*pint <<endl;
		cout<<pdouble<<"save value is :"<<*pdouble<<endl;
		return 0;
}
