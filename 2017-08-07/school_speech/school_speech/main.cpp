//
//  main.cpp
//  school_speech
//
//  Created by Gno on 2017/8/7.
//  Copyright © 2017年 Gno. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <functional>
#include <deque>
#include <string>
#include <ctime>
#include <numeric>
using namespace std;
class Speaker
{
public:
    Speaker()
    {
        m_Name = "A";
    }
    Speaker(string name):m_Name(name){m_Score[0] = m_Score[1] = m_Score[2] = 0;}
    string m_Name;
    int m_Score[3];
};
void draw(vector<int>::iterator start,vector<int>::iterator end)
{
    random_shuffle(start, end);
}
/*
 *评委打分
 */
void productScore(map<int,Speaker> &mis,int cot)
{
    for(map<int,Speaker>::iterator it = mis.begin();it!= mis.end();++it)
    {
        vector<int> vts;
        for(int i = 0;i<10;++i){vts.push_back(rand()%100+1);}
        sort(vts.begin(),vts.end());
        it->second.m_Score[cot] = accumulate(vts.begin()+1, vts.end()-1, 0)/8;
    }
}
//淘汰
void knockOut(vector<int> &sid,map<int,Speaker> &mis,int count,vector<int> &race)
{
    int index = 0;
    for(int i = 0;i<sid.size()/6;++i)
    {
        int n = 6;
        multimap<int, int, greater<int>> mlp;
        while(n--)
        {
            mlp.insert(make_pair((mis.find(sid.at(index)))->second.m_Score[count],sid.at(index)));
            ++index;
        }
        multimap<int, int, greater<int>>::iterator it = mlp.begin();
        //for_each(mlp.begin(), mlp.end(), [](pair<int, int> p){cout<<p.first<<"  "<<p.second<<endl;});
        race.push_back(it->second);
        it++;
        race.push_back(it->second);
        it++;
        race.push_back(it->second);
    }
}
void speech(vector<int> &sid,map<int,Speaker> &mis,int cont,vector<int>&next)
{
    //抽签
    draw(sid.begin(), sid.end());
    //打分
    productScore(mis, cont);
    //淘汰
    knockOut(sid,mis,cont,next);
    for(vector<int>::iterator it = next.begin();it!=next.end();++it)
    {
        if(!((it-next.begin())%3))
            cout<<"***************************"<<endl;
        cout<<"编号："<<(mis.find(*it))->first<<"  姓名："<<(mis.find(*it))->second.m_Name<<"  得分："<<(mis.find(*it))->second.m_Score[cont]<<endl;
    }
}
int main(int argc, const char * argv[]) {
    srand((unsigned int)time(NULL));
    //存储id
    vector<int> sid;
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    for(int i = 100;i<124;++i) sid.push_back(i);
    //生成学生
    map<int,Speaker> mis;
    for(int i = 100;i<124;++i)
        mis.insert(make_pair(i, Speaker({(char)('A'+i-100),'\0'})));
    cout<<"----------<第一轮>---------"<<endl;
    speech(sid,mis,0,v1);
    cout<<"----------<第二轮>---------"<<endl;
    speech(v1,mis,1,v2);
    cout<<"----------<第三轮>---------"<<endl;
    speech(v2,mis,1,v3);
    return 0;
}
