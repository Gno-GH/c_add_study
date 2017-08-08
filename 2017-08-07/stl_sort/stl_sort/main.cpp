//
//  main.cpp
//  stl_sort
//
//  Created by Gno on 2017/8/7.
//  Copyright © 2017年 Gno. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
using namespace std;
void test1()
{
    vector<int> v1,v2;
    for(int i = 0;i<5;i++)
    {
        v1.push_back(i);
        if(!(i^1))v1.push_back(i);
        if(i)v2.push_back(i*6);
    }
    vector<int> dest;
    dest.resize(v1.size()+v2.size());
    merge(v1.begin(), v1.end(), v2.begin(), v2.end(), dest.begin());
    for_each(dest.begin(), dest.end(), [](int val){cout<<val<<" ";});
    cout<<endl;
    sort(dest.begin(),dest.end(),not2(less<int>()));
    for_each(dest.begin(), dest.end(), [](int val){cout<<val<<" ";});
    cout<<endl;
    vector<int>::iterator it = adjacent_find(dest.begin(), dest.end());
    if(it!=dest.end())cout<<*it<<endl;
}
int main(int argc, const char * argv[]) {
    test1();
    return 0;
}
