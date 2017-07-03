#include <stdio.h>
#include<stdlib.h>
enum opt
{
    add='+',sub='-',mlt='*',dive='/'
}op;
int main()
{
    FILE *fp = fopen("./soure.txt","r");
    FILE *op = fopen("./obj.txt","w");
    if(!fp||!op)
    {
        printf("fail\n");
        return -1;
    }
    char buff[100];
    char buff_obj[100];
    int a,b;
    char c;
    while(!feof(fp))
    {
        fgets(buff,20,fp);
        sscanf(buff,"%d%c%d=",&a,&c,&b);
        switch(c)
        {
        case add:
            sprintf(buff_obj,"%d%c%d=%d\n",a,c,b,a+b);
            break;
        case sub:
            sprintf(buff_obj,"%d%c%d=%d\n",a,c,b,a-b);
            break;
        case mlt:
            sprintf(buff_obj,"%d%c%d=%d\n",a,c,b,a*b);
            break;
        case dive:
            sprintf(buff_obj,"%d%c%d=%d\n",a,c,b,a/b);
            break;
        }
        fputs(buff_obj,op);
    }
    fclose(fp);
    fclose(op);
    return 0;
}
