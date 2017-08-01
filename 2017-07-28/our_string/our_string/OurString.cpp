//
//  OurString.cpp
//  our_string
//
//  Created by Gno on 2017/7/28.
//  Copyright © 2017年 Gno. All rights reserved.
//

#include "OurString.hpp"
ostream& operator<<(ostream& os,OurString& s)
{
    os<<s.m_Psring;
    return os;
}
istream& operator>>(istream& is,OurString& s)
{
    if(!s.m_Psring)delete[] s.m_Psring;
    char buf[1024];
    is>>buf;
    s.m_Psring = new char[strlen(buf)+1];
    strcpy(s.m_Psring,buf);
    s.m_Size = (int)strlen(buf);
    return is;
}
OurString::OurString()
{
    
}
OurString::OurString(const char *s)
{
    this->m_Psring = new char[strlen(s)+1];
    strcpy(this->m_Psring,s);
}
OurString::OurString(const OurString& os)
{
    this->m_Psring = new char[strlen(os.m_Psring)+1];
    this->m_Size = os.m_Size;
    strcpy(this->m_Psring,os.m_Psring);
}
OurString::~OurString()
{
    if(!this->m_Psring)delete [] this->m_Psring;
}
