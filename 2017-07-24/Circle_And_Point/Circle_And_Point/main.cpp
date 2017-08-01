//
//  main.cpp
//  Circle_And_Point
//
//  Created by Gno on 2017/7/24.
//  Copyright © 2017年 Gno. All rights reserved.
//
#include <iostream>
#include "Point.hpp"
#include "Circle.hpp"
using namespace std;
void isPointInCircle(Circle &c,Point &p)
{
    int dx = (c.getCencter().getY()-p.getY())*(c.getCencter().getY()-p.getY())+(c.getCencter().getX()-p.getX())*(c.getCencter().getX()-p.getX());
    int cr = c.getR()*c.getR();
    if(cr==dx)cout<<"点在圆上"<<endl;
    else if(cr>dx)cout<<"点在圆内"<<endl;
    else cout<<"点在圆外"<<endl;
}
void test()
{
    Point p;
    p.setY(10);
    p.setX(10);
    Point cen;
    cen.setX(10);
    cen.setY(0);
    Circle c;
    c.setR(10);
    c.setCencter(cen);
    isPointInCircle(c,p);
    c.isPointAsCircle(p);
}
int main(int argc, const char * argv[]) {
    test();
    return 0;
}
