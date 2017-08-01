//
//  main.cpp
//  our_string
//
//  Created by Gno on 2017/7/28.
//  Copyright © 2017年 Gno. All rights reserved.
//

#include <iostream>
#include "OurString.hpp"
using namespace std;
void test01()
{
    OurString s1("abc");
    OurString s2(s1);
    cout<<s2<<endl;
    cout<<s1<<endl;
}
int main(int argc, const char * argv[]) {
    test01();
    return 0;
}
