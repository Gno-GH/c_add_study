#include<stdio.h>
#include<string.h>
int main()
{
	char s[] = "123456789\0";
	int len = strlen(s);
	int i=0;
	char temp;
	while(i<len/2)
	{
		s[i] = s[i]^s[len-1-i];
		s[len-1-i]= s[i]^s[len-1-i];
		s[i] = s[i]^s[len-1-i];
		i++;
	}
	printf("%s\n",s);
	return 0;
}
