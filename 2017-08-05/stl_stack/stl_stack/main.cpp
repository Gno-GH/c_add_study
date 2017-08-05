//
//  main.cpp
//  stl_stack
//
//  Created by Gno on 2017/8/5.
//  Copyright © 2017年 Gno. All rights reserved.
//

#include <iostream>
#include <stack>
using namespace std;
void test()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
    cout<<"stack size:"<<st.size()<<endl;
}
int main(int argc, const char * argv[]) {
    test();
    return 0;
}
