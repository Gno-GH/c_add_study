#include<iostream>
#include<cstdlib>
#include<fstream>
using namespace std;
int main()
{
		ifstream infile;
		infile.open("ifstream.txt");
		double value;
		infile>>value;
		while(infile.good())
		{
				cout<<value<<endl;
				infile>>value;
		}
		infile.close();
		return 0;
}
