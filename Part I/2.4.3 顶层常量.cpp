#include<iostream>
using namespace std;

int main()
{
	int i=0;
	int *const p1=&i;
	const int ci=42;
	const int *p2=&ci;
	const int *const p3=p2;
	const int &r=ci;
	i=ci;
	p2=p3;
    //int *p=p3;//p3是const int，故*p应该是const int 
	p2=p3;
	p2=&i;
	//int &q=ci;//ci是const int，故&q应该是const int
	const int &r2=i;
	

	getchar();
	getchar();
	return 0;
}

