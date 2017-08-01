//
//  main.cpp
//  myarry_prc
//
//  Created by Gno on 2017/7/27.
//  Copyright © 2017年 Gno. All rights reserved.
//

#include <iostream>
#include "MyArray.hpp"
using namespace std;
int main(int argc, const char * argv[]) {
    MyArray array(10);
    for(int i = 0;i<10;i++)
        array.pushBack(i);
    array.setVal(0, 100);
    for(int i = 0;i<10;i++)
        cout<<array.getData(i)<<endl;
    return 0;
}
