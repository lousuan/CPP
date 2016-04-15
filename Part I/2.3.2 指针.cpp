#include<iostream>
using namespace std;

int main()
{
	double dval=3.14;
	double *pd=&dval;
	double *pd2=pd;
	double *pd3=pd2;
	
	cout << pd << " " << *pd << endl;
	cout << pd2 << " " << *pd2 << endl;
	cout << pd3 << " " << *pd3 << endl;

	getchar();
	getchar();
	return 0;
}

