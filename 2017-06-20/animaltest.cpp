#include <iostream>
#include"animal.h"
int main()
{
    string a_color("panda");
    Animal an(10,a_color);
    string d_color("hashiqi");
    Dog dg(11,d_color,12.5);
    an.saySome();
    dg.saySome();
    Animal *all= &an;
    all->saySome();
    Animal &dll = dg;
    dll.saySome();
    return 0;
}
