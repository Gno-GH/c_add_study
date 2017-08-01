//
//  SmartPoint.cpp
//  operator_prc
//
//  Created by Gno on 2017/7/27.
//  Copyright © 2017年 Gno. All rights reserved.
//

#include "SmartPoint.hpp"
SmartPoint::SmartPoint(OldWang *p)
{
    this->m_Ow = p;
}
SmartPoint::~SmartPoint()
{
    if(!m_Ow)delete m_Ow;
}
OldWang * SmartPoint::operator->()
{
    return this->m_Ow;
}
OldWang& SmartPoint::operator*()
{
    return *(this->m_Ow);
}
