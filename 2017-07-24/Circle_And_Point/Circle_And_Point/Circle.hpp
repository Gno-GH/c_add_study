//
//  Circle.hpp
//  Circle_And_Point
//
//  Created by Gno on 2017/7/24.
//  Copyright © 2017年 Gno. All rights reserved.
//

#ifndef Circle_hpp
#define Circle_hpp
#include<iostream>
#include"Point.hpp"
using namespace std;
class Circle
{
    private :
    int m_R;
    Point m_cencter;
    public :
    void setCencter(Point p);
    Point getCencter();
    int getR();
    void setR(int r);
    void isPointAsCircle(Point &p);
};
#endif /* Circle_hpp */
