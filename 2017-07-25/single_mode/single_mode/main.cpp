//
//  main.cpp
//  single_mode
//
//  Created by Gno on 2017/7/25.
//  Copyright © 2017年 Gno. All rights reserved.
//

#include <iostream>
using namespace std;
class OldWang
{
private:
    static OldWang* old;
    OldWang(){count = 0;}
    OldWang(const OldWang&o){}
public:
    int count;
    static OldWang* getInstance()
    {
        return old;
    }
};
OldWang* OldWang::old = new OldWang;
int main(int argc, const char * argv[]) {
    OldWang* o1 = OldWang::getInstance();
    OldWang* o2 = OldWang::getInstance();
    if(o1==o2)
        cout<<"o1 == o2"<<endl;
    else
        cout<<"o1 != o2"<<endl;
    o1->count+=2;
    o2->count++;
    cout<<o1->count<<endl;
    return 0;
}
