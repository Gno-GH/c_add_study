#include <stdio.h>
int main()
{
    const int a = 0;
    const int *p = &a;
    int **pr = &p;
    **pr = 11;
    printf("%d \n",a);
    return 0;
}
