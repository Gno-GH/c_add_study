//
//  FileManager.cpp
//  game_pk
//
//  Created by Gno on 2017/8/8.
//  Copyright © 2017年 Gno. All rights reserved.
//

#include "FileManager.hpp"
void FileManager::loadCSVData()
{
    ifstream ifs("./Hero.csv");
    if(!ifs.is_open())
        throw "file open fail";
    string firstline;
    ifs>>firstline;
    vector<string> vts;
    int pos = -1;
    int start = 0;
    while(true)
    {
        string strsub;
        pos = firstline.find(",",start);
        if(pos==-1)
        {
            strsub = firstline.substr(start,firstline.size()-start);
            vts.push_back(strsub);
            break;
        }
        strsub = firstline.substr(start,pos-start);
        vts.push_back(strsub);
        start = pos+1;
    }
    for_each(vts.begin(), vts.end(), [](string s){cout<<s<<endl;});
    return ;
}
