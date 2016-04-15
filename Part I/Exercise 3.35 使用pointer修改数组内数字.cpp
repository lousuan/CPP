#include<iostream>
using namespace std;

int main()
{
	int a[]={0,1,2,3,4,5};
	for (auto *p=a; p!=end(a); ++p)
		*p=0;
		
	for (auto *p=a; p!=end(a); ++p)
		cout << *p << " ";
		
	return 0;
}
