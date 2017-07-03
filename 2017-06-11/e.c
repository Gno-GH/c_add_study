#include<stdio.h>
int main()
{
		int l,n,m;
		l=9;
		for(n=0;n<=l;n++)
		{
				for(m=l-n;m>0;m--)printf(" ");
				for(m=0;m<n*2+1;m++)printf("*");
				printf("\n");
		}
		return 0;
}
