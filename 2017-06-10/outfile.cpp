#include<iostream>
#include<fstream>
using namespace std;
int main()
{
		char *str = new char [100];
		cin.get(str,100).get();
		ofstream outfile;
		outfile.open("ofstream.txt");
		outfile<<str<<endl;
		outfile.close();
		return 0;
}

