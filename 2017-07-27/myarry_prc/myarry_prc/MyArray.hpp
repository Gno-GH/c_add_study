//
//  MyArray.hpp
//  myarry_prc
//
//  Created by Gno on 2017/7/27.
//  Copyright © 2017年 Gno. All rights reserved.
//

#ifndef MyArray_hpp
#define MyArray_hpp
class MyArray
{
private:
    int m_Size;
    int m_Capacity;
    int * m_Address;
public:
    MyArray();
    explicit MyArray(int capa);
    MyArray(const MyArray& array);
    int getData(int index);
    void setVal(int index,int val);
    void pushBack(int val);
    ~MyArray();
};

#endif /* MyArray_hpp */
