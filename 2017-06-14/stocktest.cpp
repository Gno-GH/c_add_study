#include<iostream>
using namespace std;
#include"stockfile.h"
int main()
{
	Stock s;
	s.show();
    Stock sc = Stock(33,33,33);
    sc.show();
    cout<<"This is Test"<<endl;
	return 0;
}
