//
//  main.cpp
//  sttaic_abt
//
//  Created by Gno on 2017/7/25.
//  Copyright © 2017年 Gno. All rights reserved.
//

#include <iostream>
using namespace std;
class Stc
{
public:
    static int num;
    static void showVal();
private:
    static int val;
};
int Stc::val = 10;
int Stc::num = 10;
void Stc::showVal()
{
    cout<<"Val :"<<Stc::val<<endl;
}
int main(int argc, const char * argv[]) {
    Stc::showVal();
    return 0;
}
