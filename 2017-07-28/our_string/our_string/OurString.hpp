//
//  OurString.hpp
//  our_string
//
//  Created by Gno on 2017/7/28.
//  Copyright © 2017年 Gno. All rights reserved.
//

#ifndef OurString_hpp
#define OurString_hpp
#include <string>
#include <iostream>
using namespace std;
class OurString
{
    friend ostream& operator<<(ostream& os,OurString& s);
    friend istream& operator>>(istream& is,OurString& s);
private:
    int m_Size;
    char* m_Psring;
public:
    OurString();
    OurString(const char *s);
    OurString(const OurString& os);
    ~OurString();
    OurString operator+(const char *s);
    OurString operator+(const OurString&s);
};
#endif /* OurString_hpp */
