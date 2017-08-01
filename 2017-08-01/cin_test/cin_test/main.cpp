//
//  main.cpp
//  cin_test
//
//  Created by Gno on 2017/8/1.
//  Copyright © 2017年 Gno. All rights reserved.
//

#include <iostream>
using namespace std;
void test()
{
    char c = cin.get();
    cout<<"cin_get() c :"<<c<<endl;
    cin.sync();
    cin.get(c);
//    while('\n'==c)
//        cin.get(c);
    cout<<"cin_get(c) :"<<c<<endl;
    cout<<cin.fill('a')<<endl;
}
int main(int argc, const char * argv[]) {
    test();
    return 0;
}
