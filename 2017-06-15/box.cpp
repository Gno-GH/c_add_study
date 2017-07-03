#include <iostream>
#include<string>
using namespace std;
struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};
template <class T>
T max_box(const T &a,const T &b);
template <> struct box max_box(const struct box &a,const struct  box &b);
void show(const struct box &b);
void setbox(struct box &b);
int main()
{
    struct box b;
    cin.get(b.maker,40).get();
    cin>>b.width;
    cin>>b.height;
    cin>>b.length;
    setbox(b);
    show(b);
    struct box a{"cdf",10,30,50,1200};
    show(max_box(a,b));
    return 0;
}
void show(const struct box &b)
{
    cout<<b.maker<<endl;
    cout<<b.volume<<endl;
    return ;
}
void setbox(struct box &b)
{
    b.volume = b.width*b.length*b.height;
    return ;
}
    template <class T>
T max_box(const T &a,const T &b)
{
    return a>b?a:b;
}
template <> struct box max_box(const struct  box &a,const struct  box &b)
{
    return a.volume>b.volume?a:b;
}
