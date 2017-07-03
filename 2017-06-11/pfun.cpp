#include<iostream>
using namespace std;
void print_two();
void print();
void printPoint(void (*print)(void));
int main()
{
		printPoint(print);
		printPoint(print_two);
		return 0;
}
void printPoint(void (*print)(void))
{
		print();
		return ;
}
void print()
{
		cout<<"This function!"<<endl;
		return ;
} 
void print_two(void)
{
		cout<<"This is function Two"<<endl;
		return ;
}
