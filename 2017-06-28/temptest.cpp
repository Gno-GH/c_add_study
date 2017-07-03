#include <iostream>
using namespace std;
template<int n>
class A
{
    public :
        int i;
        A();
};
template<int n>
A<n>::A()
{
    cout<<n<<endl;
}
int main()
{
    A<22> a;
    return 0;
}
