//
//  main.cpp
//  stl_set
//
//  Created by Gno on 2017/8/5.
//  Copyright © 2017年 Gno. All rights reserved.
//

#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
void print(int i)
{
    cout.setf(ios_base::left);
    cout.width(3);
    cout<<i;
}
struct Cmp
{
    bool operator()(int a,int b)
    {
        return a>b;
    }
};
void test()
{
    set<int,Cmp> st;
    st.insert(1);
    st.insert(3);
    st.insert(7);
    st.insert(4);
    st.insert(9);
    for_each(st.begin(), st.end(), print);
    cout<<endl;
}
int main(int argc, const char * argv[]) {
    test();
    return 0;
}
