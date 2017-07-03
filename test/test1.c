#include <stdio.h>
int main()
{
    char c;
    scanf("%c",&c);
    printf("%d ",c);
    fflush(stdin);
    scanf("%c",&c);
    printf("%d\n",c);
    return 0;
}
