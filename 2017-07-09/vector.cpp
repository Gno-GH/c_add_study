#include <iostream>
#include<iterator>
#include<ostream>
#include<vector>
#include<algorithm>
using namespace std;
void showValue(const int &i)
{
    cout<<i<<endl;
    return ;
}
int main()
{
    vector<int> ves(5);
    for(int i = 0;i<5;i++)
        ves[i] = i;
    vector<int>::iterator it = ves.begin();
    cout<<"iterator print"<<endl;
    while(it!=ves.end())
        cout<<*it++<<endl;
    cout<<"for_each print"<<endl;
    for_each(ves.begin(),ves.end(),showValue);
    random_shuffle(ves.begin(),ves.end());
    cout<<"random print"<<endl;
    for_each(ves.begin(),ves.end(),showValue);
    cout<<"sort print"<<endl;
    sort(ves.begin(),ves.end());
    for_each(ves.begin(),ves.end(),showValue);
    cout<<"reverse_iterator print"<<endl;
    for_each(ves.rbegin(),ves.rend(),showValue);
    cout<<"ostream_iterator print"<<endl;
    ostream_iterator<int,char> out_iter(cout," ");
    copy(ves.begin(),ves.end(),out_iter);
    cout<<endl;
    cout<<"The first value is :"<<endl;
    cout<<ves.front()<<endl;
    cout<<"The last value is :"<<endl;
    cout<<ves.back()<<endl;
    cout<<"clear "<<endl;
    ves.clear();
    cout<<ves.size()<<endl;
    return 0;
}
