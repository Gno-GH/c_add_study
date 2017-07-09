#include <iostream>
#include<map>
#include<set>
#include<iterator>
using namespace std;
int main()
{
    multiset<int> m{1,2,3,4,4,5,6};
    cout<<"multiset print:"<<endl;
    copy(m.begin(),m.end(),ostream_iterator<int,char>(cout,"  "));
    cout<<endl;
    cout<<"set print:"<<endl;
    set<int> s(m.begin(),m.end());
    copy(s.begin(),s.end(),ostream_iterator<int,char>(cout,"  "));
    cout<<endl;
    multimap<int,string> mp;
    mp.insert(pair<int,string>(1,"111"));
    mp.insert(pair<int,string>(2,"222"));
    mp.insert(pair<int,string>(3,"333"));
    mp.insert(pair<int,string>(3,"666"));
    mp.insert(pair<int,string>(5,"555"));
    mp.insert(pair<int,string>(4,"444"));
    multimap<int,string>::iterator it;
    cout<<"multimap print:"<<endl;
    for(it=mp.begin();it!=mp.end();it++)
        cout<<(*it).first<<"    "<<(*it).second<<endl;
    //count key value is 3 
    cout<<"the key is 3:"<<endl;
    cout<<mp.count(3)<<endl;
    //don't recover
    cout<<"map[3]:"<<endl;
    map<int,string> ma(mp.begin(),mp.end()); 
    cout<<ma[3]<<endl;
    return 0;
}

