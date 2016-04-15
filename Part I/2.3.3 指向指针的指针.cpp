#include<iostream>
using namespace std;

int main()
{
	int ival=1024;
	int *pi=&ival;
	int **ppi=&pi;
	
	cout << ival << "\n" << *pi << "\n" << **ppi << endl;
	cout << pi << " " << *ppi << " " << ppi << endl;  

	getchar();
	getchar();
	return 0;
}

