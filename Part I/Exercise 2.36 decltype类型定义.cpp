#include<iostream>
using namespace std;

int main()
{
	int a=3,b=4,e,f;
	decltype(a)c=a;//c��int 
	decltype((b))d=a;//d��int&,ָ��a 
	f=c++;//4 
	e=++d;//4
    cout << c << " " << d << endl; 
    cout << e << " " << f << endl; 

	getchar();
	getchar();
	return 0;
}

