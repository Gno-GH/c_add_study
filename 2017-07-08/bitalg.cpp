#include <iostream>
using namespace std;
int main()
{
    int hx = 0xffffeeee;
    int hex = (hx>>16)|(hx<<16);
    cout.setf(ios::showbase);
    cout.setf(ios::hex);
    cout<<std::hex<<hex<<endl;
    int tx = 0xf0000000;
    int tx_s = tx>>1;
    cout<<tx_s<<endl;
    cout<<std::dec<<tx_s<<endl;
    return 0;
}
