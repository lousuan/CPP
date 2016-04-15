#include<iostream>
using namespace std;

int main()
{
	int a=1,*b=&a;
	*b=2;
	b=0;
	
	cout << a << " " << b << endl;

	getchar();
	getchar();
	return 0;
}

