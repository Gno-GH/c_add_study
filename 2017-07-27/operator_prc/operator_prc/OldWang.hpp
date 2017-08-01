//
//  OldWang.hpp
//  operator_prc
//
//  Created by Gno on 2017/7/27.
//  Copyright © 2017年 Gno. All rights reserved.
//

#ifndef OldWang_hpp
#define OldWang_hpp
#include <iostream>
using namespace std;
class OldWang
{
    friend ostream& operator<<(ostream &cout,OldWang &ow);
private:
    int m_Age;
    char *m_Name;
public:
    OldWang();
    OldWang(const OldWang& ow);
    OldWang(char *s);
    ~OldWang();
    char* getName();
    void setName(char *name);
    int getAge();
    void setAge(int age);
    OldWang operator+(const OldWang& ow);
    OldWang& operator--();
    OldWang operator--(int);
    OldWang& operator=(OldWang op);
    bool operator==(OldWang &op);
    bool operator!=(OldWang &op);
    void operator()(OldWang &op);

};
#endif /* OldWang_hpp */
