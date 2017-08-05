//
//  main.cpp
//  stl_string
//
//  Created by Gno on 2017/8/4.
//  Copyright © 2017年 Gno. All rights reserved.
//

#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;
void test()
{
    string s1 = "1234567890";
    try{
        s1.at(11);
    }catch(...){
        cout<<"产生了异常"<<endl;
    }
    string s2 = "azc";
    string s3 = "bbc";
    cout<<s2.compare(s3)<<endl;
    string s4 = "gnohub@gmail.com";
    string s5 = s4.substr(0,s4.find('@'));
    string s6 = s4.substr(s4.find('@')+1,s4.length()-1);
    cout<<s5<<endl;
    cout<<s6<<endl;
}
int main(int argc, const char * argv[]) {
    test();
    return 0;
}
