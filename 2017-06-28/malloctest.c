#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char *s = (char*)malloc(sizeof(char)*3);
    s[0] = 'a';
    for(int i=0;i<100;i++)
    printf("%d\n",s[i]);
    return 0;
}
