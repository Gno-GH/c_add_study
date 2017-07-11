#include<stdlib.h>
#include<stdio.h>
#include<string.h>
typedef struct
{
    int weight;
    char s[10];

}Dog;
int sort(void *,int len,int width,int (*cmp)(void*,void*));
int cmp(void *,void *);
int generalswap(void *,void *,int size);
int main(int argc, char const *argv[]) {
    Dog d[3] = {{1,"a"},{3,"b"},{2,"c"}};
    sort(d,3,sizeof(Dog),cmp);
    for(int i =0;i<3;i++)
        printf("%d %s\n",d[i].weight,d[i].s);
    return 0;

}
int generalswap(void *a,void *b,int size)
{
    if(!a||!b)return 0;
    void *c = malloc(size);
    memcpy(c,a,size);
    memcpy(a,b,size);
    memcpy(b,c,size);
    return 1;

}
int sort(void *arg,int len,int width,int (*cmp)(void*,void*))
{
    if(!arg)return 0;
    int i = 0;
    int j = 0;
    for(i = 0;i<len-1;i++)
        for(j = i+1;j<len;j++)
        {
            if(cmp((void*)(arg+i*width),(void*)(arg+j*width)))
                generalswap((void*)(arg+i*width),(void*)(arg+j*width),width);

        }
    return 0;

}
int cmp(void *a,void *b)
{
    return ((Dog*)a)->weight>((Dog*)b)->weight?0:1;

}

