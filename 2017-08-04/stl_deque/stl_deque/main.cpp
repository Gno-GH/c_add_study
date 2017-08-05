//
//  main.cpp
//  stl_deque
//
//  Created by Gno on 2017/8/4.
//  Copyright © 2017年 Gno. All rights reserved.
//

#include <iostream>
#include <deque>
#include <vector>
#include <algorithm>
using namespace std;
void print(int i)
{
    cout.width(3);
    cout.setf(ios_base::left);
    cout<<i;
}
void test1()
{
    vector<int> vt;
    for(int i = 1;i<10;++i )
        vt.push_back(i);
    deque<int> dq(vt.rbegin(),vt.rend());
    for_each(dq.begin(), dq.end(), print);
    cout<<endl;
}
int main(int argc, const char * argv[]) {
    test1();
    return 0;
}
