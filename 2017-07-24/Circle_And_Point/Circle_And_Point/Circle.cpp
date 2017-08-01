//
//  Circle.cpp
//  Circle_And_Point
//
//  Created by Gno on 2017/7/24.
//  Copyright © 2017年 Gno. All rights reserved.
//

#include "Circle.hpp"
void Circle::setCencter(Point p)
{
    m_cencter.setX(p.getX());
    m_cencter.setY(p.getY());
}
Point Circle::getCencter()
{
    return m_cencter;
}
int Circle::getR()
{
    return m_R;
}
void Circle::setR(int r)
{
    m_R = r;
}
void Circle::isPointAsCircle(Point &p)
{
    int dx = (m_cencter.getY()-p.getY())*(m_cencter.getY()-p.getY())+(m_cencter.getX()-p.getX())*(m_cencter.getX()-p.getX());
    int cr = m_R* m_R;
    if(cr==dx)cout<<"成员函数::点在圆上"<<endl;
    else if(cr>dx)cout<<"成员函数::点在圆内"<<endl;
    else cout<<"成员函数::点在圆外"<<endl;
}
