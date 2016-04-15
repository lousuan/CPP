#include<iostream>
using namespace std;

int main()
{
	int a[]={0,1,2,3,4,5,6};
	int *p1=&a[5];
	int *p2=&a[1];
	
	p1+=p2-p1;//p2
	
	cout << *p1;
	return 0;
} 
