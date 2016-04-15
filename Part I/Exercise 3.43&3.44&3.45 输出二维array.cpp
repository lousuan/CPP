#include<iostream>
using namespace std;

int main()
{
	int a[3][4]={0,1,2,3,4,5,6,7,8,9,10,11};
	
	for (int (&i)[4]:a)
	{
		for (int &j:i)
			cout << j << ' ';
		cout << endl;
	}	
	
	for (int i=0; i!=3; ++i)
	{
		for (int j=0; j!=4; ++j)
			cout << a[i][j] << ' ';
		cout << endl;
	}
	
	for (int (*p)[4]=a; p!=a+3; ++p)
	{
		for (int *q=*p; q!=*p+4; ++q)
			cout << *q << ' ';
		cout << endl;
	}
	
	using int4=int[4];
	for (int4 *p=a; p!=a+3; ++p)
	{
		for (int *q=*p; q!=*p+4; ++q)
			cout << *q << ' ';
		cout << endl;
	}
	
	for (auto &row:a)
	{
		for (auto &col:row)
			cout << col << ' ';
		cout << endl;
	}

	return 0;
}

