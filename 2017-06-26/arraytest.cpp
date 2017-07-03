#include <iostream>
using namespace std;
class Array
{
private :
    enum {MAX = 3};
    int arr[MAX];
    int index;
public :
    Array();
    void arrup();
};
Array::Array()
{
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    index = 0;
}
void Array::arrup()
{
    cout<<arr[index++]<<endl;
}
int main()
{
    Array arr;
    for(int i=0;i<10;i++)
        arr.arrup();
    return 0;
}
