//
//  main.cpp
//  template_file
//
//  Created by Gno on 2017/7/31.
//  Copyright © 2017年 Gno. All rights reserved.
//

#include <iostream>
#include "Dog.hpp"
void test()
{
    Dog<int> d;
    d.fun();
    func(d);
    func(d,1);
}
int main(int argc, const char * argv[]) {
    test();
    return 0;
}
