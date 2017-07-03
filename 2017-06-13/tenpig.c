#include<stdio.h>
int main()
{
	int pigs[10] =  {0};
	int i;
	int max;
	for(i=0;i<10;i++)scanf("%d",pigs+i);
	max = 0;
	for(i=0;i<10;i++)
		if(*(pigs+max)<*(pigs+i))max=i;
	printf("Weight %d\n",*(pigs+max));
	return 0;
}
