#include <stdio.h>

double add(double a,double b)
{
    return a+b;
}
double miu(double a,double b)
{
    return a-b;
}
double dev(double a,double b)
{
    if(0==b)
    {
        printf("B can't 0\n");
        exit(0);
    }
    return a/b;
}
double mul(double a,double b)
{
    return a*b;
}
int main()
{
    char c;
    double a,b;
    scanf("%lf%c%lf",&a,&c,&b);
    switch(c)
    {
    case '+':printf("=%lf\n",add(a,b));break;
    case '-':printf("=%lf\n",miu(a,b));break;
    case '*':printf("=%lf\n",mul(a,b));break;
    case '/':printf("=%lf\n",dev(a,b));break;
    }
    return 0;
}
