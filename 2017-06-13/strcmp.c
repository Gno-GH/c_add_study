#include<stdio.h>
int strcmp(char *s1,char *s2)
{
	int i = 0;
	int flag = 1;
	while(s1[i]!='\0'&&s2[i]!='\0')
	{
		if(s1[i]!=s2[i]){
			flag=0;
			break;
		}
		i++;
	}
	if(s1[i]!=s2[i])return 0;
	return flag;
}
int main()
{
	char s1[]="14345";
	char s2[]="1234";
	char s3[]="1234";
	printf("s1=%s\ns2=%s\n",s1,s2);
	if(strcmp(s1,s2))printf("s1 == s2\n");
	else printf("s1 != s2\n");
	printf("s1=%s\ns3=%s\n",s2,s3);
	if(strcmp(s3,s2))printf("s3 == s2\n");
	else printf("s3 != s2\n");
	return 0;
}
