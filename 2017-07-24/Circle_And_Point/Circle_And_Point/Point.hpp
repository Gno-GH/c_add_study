//
//  Point.hpp
//  Circle_And_Point
//
//  Created by Gno on 2017/7/24.
//  Copyright © 2017年 Gno. All rights reserved.
//

#ifndef Point_hpp
#define Point_hpp
#include<iostream>
using namespace std;
class Point
{
    private :
    int m_X;
    int m_Y;
    public :
    int getX();
    int getY();
    void setX(int x);
    void setY(int y);
};
#endif /* Point_hpp */
