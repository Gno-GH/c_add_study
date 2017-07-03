#include<stdlib.h>
#include<string.h>
#include<stdio.h>
typedef struct aa
{
    int i:8;
    int b:2;
    int c:6;
}A;
int main()
{
    printf("%d\n",sizeof(A));
    return 0;
}
