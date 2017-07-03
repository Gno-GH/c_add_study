#include<iostream>
using namespace std;
int main()
{
const int MAX = 100;
char name[MAX];
char food[MAX];
cout<<"Your Name:"<<endl;
cin.get(name,MAX).get();
cout<<"Your favorite food:"<<endl;
cin.get(food,MAX).get();
cout<<food<<endl;
return 0;
}
