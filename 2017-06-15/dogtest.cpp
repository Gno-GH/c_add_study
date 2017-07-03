#include <iostream>
#include"dog.h"
using namespace std;
int main()
{
    Dog d;
    d.print();
    cout<<"Change color after:"<<endl;
    d.setColor(Dog::color_s(3));
    d.print();
    return 0;
}
