#include <iostream>
using namespace std;
int fibonacci(int number)
{
    if(!number||number==1)return number;
    int first = 0;
    int second = 1;
    for(int i = 1;i<number;++i)
    {
        int temp = first+second;
        first = second;
        second = temp;
    }
    return second;
}
int main()
{
    cout<<fibonacci(5)<<endl;
    return 0;
}
