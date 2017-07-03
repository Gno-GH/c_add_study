#include<iostream>
using namespace std;
typedef struct dog
{
	int clocor;
	mutable int age;
}DOG;
int main()
{
	const DOG d = {1,2};
	d.age = 12;
	cout<<d.age<<endl;       
	return 0;
}
