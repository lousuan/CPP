#include<iostream>
using namespace std;

int main()
{
	int ival=1.01; 
	//int &rcal1=1.01;
	int &rval2=ival;
	//int &rval3;
	cout << rval2 << endl;

	getchar();
	getchar();
	return 0;
}

