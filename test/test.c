#include<stdlib.h>
#include<string.h>
#include<stdio.h>
const int a =0;
typedef struct aa
{
    int i:8;
    int b:2;
    int c:6;
}A;
void f(char **p)
{
    (*p) =(char *)malloc(100);
    strcpy(*p,"abc");
}
int main()
{
    int **p ;
    *p=&a;
    **p = 11;
    printf("%d\n",a);
    return 0;
}
