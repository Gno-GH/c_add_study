#include <stdio.h>
#include<string.h>
int main()
{
    char buf[100]="hello";
    gets(buf);
    printf("%c\n",buf[4]);
    return 0;
}
