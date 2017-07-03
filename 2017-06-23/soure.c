#include<stdio.h>
#include<stdlib.h>
enum opt
{
    add,sub,mlt,dive
}op;
int main()
{
    srand((unsigned int)time(NULL));
    FILE *fp = fopen("./soure.txt","w");
    if(!fp)return -1;
    char c;
    char buff[100];
    int a,b;
    int i;
    for(i=0;i<20;i++)
    {
        a = rand()%10+1;
        b = rand()%10+1;
        c = rand()%4;
        switch(c)
        {
        case add:
            c='+';
            break;
        case sub:
            c='-';
            break;
        case mlt:
            c='*';
            break;
        case dive:
            c='/';
            break;
        }
        memset(buff,0,100);
        sprintf(buff,"%d%c%d=\n",a,c,b);
        fputs(buff,fp);
    }
    fclose(fp);
    return 0;
}
