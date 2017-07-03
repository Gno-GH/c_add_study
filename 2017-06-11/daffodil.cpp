#include<iostream>
using namespace std;
int main()
{
		int i = 2;
		for(i = 2;i<1000;i++)
				if(i==(i%10)*(i%10)*(i%10)+(i/100)*(i/100)*(i/100)+((i/10)%10)*((i/10)%10)*((i/10)%10))
						cout<<i<<endl;
		return 0;
}
