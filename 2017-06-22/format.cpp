#include <iostream>
using namespace std;
int main()
{
    float f = 12.33333;
    cout<<f<<endl;
    cout.setf(ios_base::fixed,ios_base::floatfield);
    cout.precision(2);
    cout<<f<<endl;
    return 0;
}
