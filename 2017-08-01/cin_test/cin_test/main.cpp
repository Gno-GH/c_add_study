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
    char buf[1024];
    cin.ignore();
    cin.get(buf, 1024);
    cout<<buf<<endl;
    cin.ignore();
    cin.getline(buf,1024);
    cout<<buf<<endl;
    //cin.sync();
    cin.ignore();
    cin.get(c);
    cout<<"cin_get(c) :"<<c<<endl;
    cout<<cin.fill('a')<<endl;
    cout<<"------------"<<endl;
    cout<<cin.peek()<<endl;//窥探
    cin.putback(c);//放回去
}
int main(int argc, const char * argv[]) {
   // test();
    char buf[1024];
    cin.get(buf,1024);
    cout<<cin.peek()<<endl;
    cin.get(buf,1024);
    cout<<buf<<endl;
    cout<<cin.peek()<<endl;
    cin.get(buf,1024);
    cout<<buf<<endl;
    cout<<cin.peek()<<endl;
    return 0;
}
