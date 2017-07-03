#include<iostream>
using namespace std;
int main()
{
		int *pintArray = new int [5];
		pintArray[0] = 0;
		pintArray[1] = 1;
		pintArray[2] = 2;
		pintArray[3] = 3;
		pintArray[4] = 4;
		cout<<*(pintArray+3)<<endl;
		delete [] pintArray;
		return 0;
}
