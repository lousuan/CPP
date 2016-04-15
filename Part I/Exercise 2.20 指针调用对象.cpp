#include<iostream>
using namespace std;

int main()
{
	int i=42;
	int *p1=&i;
	*p1=*p1**p1;//i=i*i
	
	cout << *p1 << endl; 

	getchar();
	getchar();
	return 0;
}

