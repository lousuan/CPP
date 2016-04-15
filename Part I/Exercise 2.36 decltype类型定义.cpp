#include<iostream>
using namespace std;

int main()
{
	int a=3,b=4,e,f;
	decltype(a)c=a;//c是int 
	decltype((b))d=a;//d是int&,指向a 
	f=c++;//4 
	e=++d;//4
    cout << c << " " << d << endl; 
    cout << e << " " << f << endl; 

	getchar();
	getchar();
	return 0;
}

