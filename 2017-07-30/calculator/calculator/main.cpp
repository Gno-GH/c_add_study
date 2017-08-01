//
//  main.cpp
//  calculator
//
//  Created by Gno on 2017/7/30.
//  Copyright © 2017年 Gno. All rights reserved.
//

#include <iostream>
using namespace std;
class Clu
{
public:
    virtual int getResult()
    {
        return 0;
    }
    int m_A;
    int m_B;
};
class Add : public Clu
{
public:
    int getResult()
    {
        return m_A+m_B;
    }
};
class Mul : public Clu
{
public:
    int getResult()
    {
        return m_A*m_B;
    }
};
class Div : public Clu
{
public:
    int getResult()
    {
        return m_A/m_B;
    }
};
class Mus : public Clu
{
public:
    int getResult()
    {
        return m_A-m_B;
    }
};
void test()
{
    Clu* clu = new Add;
    clu->m_A = 1;
    clu->m_B = 1;
    cout<<clu->getResult()<<endl;
    delete clu;
    clu = new Mus;
    clu->m_A = 1;
    clu->m_B = 1;
    cout<<clu->getResult()<<endl;
    delete clu;
}
int main(int argc, const char * argv[]) {
    test();
    return 0;
}
