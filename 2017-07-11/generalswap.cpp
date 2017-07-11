#include <iostream>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
using namespace std;
int swap(void *a,void *b,int len)
{
    if(!a||!b)return 0;
    void *s = malloc(len);
    memcpy(s,a,len);
    memcpy(a,b,len);
    memcpy(b,s,len);
    free(s);
    return 1;
}
typedef struct 
{
    int a;
    int b;
}C;
int main()
{
    C a = {1,2};
    C b = {3,4};
    swap(&a,&b,sizeof(C));
    cout<<"b.a="<<b.a<<endl;
    cout<<"b.b="<<b.b<<endl;
    int c = 15;
    int d = 20;
    swap(&c,&d,sizeof(int));
    cout<<"c ="<<c<<endl;
    cout<<"d ="<<d<<endl;
    return 0;
}
