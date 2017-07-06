#include <iostream>
#include<vector>
using namespace std;
const int MAX = 3;
int main()
{
    vector<int> ves(MAX);
    int i = 0;
    for(i=0;i<MAX;i++)
        cin>>ves[i];
    cout<<"vector size is "<<ves.size()<<endl;
    vector<int>::iterator it;
    it = ves.begin();
    while(it!=ves.end())
        cout<<*it++<<endl;
    ves.push_back(4);
    ves.push_back(5);
    cout<<"after append "<<endl;
    it = ves.begin();
    while(it!=ves.end())
        cout<<*it++<<endl;
    return 0;
}
