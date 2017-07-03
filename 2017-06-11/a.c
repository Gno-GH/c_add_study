#include<stdio.h>
int main()
{
	int l,n,m;
	printf("input line number:\n");
	scanf("%d",&l);
	for(n=0;n<=l;n++)
	{   
		for(m=l-n;m>0;m--)printf(" ");
		for(m=0;m<n+1;m++)printf("%c",'A'+m%26);
		for(m-=2;m>=0;m--)printf("%c",'A'+m%26);
		printf("\n");
	}   
	return 0;
}
