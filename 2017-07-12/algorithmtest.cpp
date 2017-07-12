#include <iostream>
#include<numeric>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    vector<string> strs ={"aaa","bbb","ccc","ddd"};
    string sum = accumulate(strs.begin(),strs.end(),string("+"));
    cout<<sum<<endl;
    return 0;
}
