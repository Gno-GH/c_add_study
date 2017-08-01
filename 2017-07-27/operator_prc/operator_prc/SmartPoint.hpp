//
//  SmartPoint.hpp
//  operator_prc
//
//  Created by Gno on 2017/7/27.
//  Copyright © 2017年 Gno. All rights reserved.
//

#ifndef SmartPoint_hpp
#define SmartPoint_hpp
#include "OldWang.hpp"
class SmartPoint
{
private:
    OldWang * m_Ow;
public:
    SmartPoint(OldWang *p);
    ~SmartPoint();
    OldWang * operator->();
    OldWang& operator*();
};
#endif /* SmartPoint_hpp */
