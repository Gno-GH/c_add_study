#include <stdio.h>
int main()
{
    char s[100] = " hello world ";
    char *p = s,*b = s;
    while(*b)
    {
        if(*b!=' ')
           *p++=*b++;
        else b++;
    }
    *p = '\0';
    printf("%s\n",s);
    return 0;
}
