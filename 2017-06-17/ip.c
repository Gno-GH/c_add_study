#include <stdio.h>
#include<math.h>
int main()
{
    int ip = 2130706433;
    unsigned char *p =(unsigned char*) &ip;
    printf("%x\n",ip);
    printf("%d\n",sizeof(void *));
    return 0;
}
