#include<iostream>
using namespace std;

int main()
{
	int a=3,b=4;
	decltype(a) c=a;//c «int 
	decltype(a=b) d=a;//d «int& 
    cout << c << " " << d << " " << a << endl;
	c=5;
    d=6;
    cout << c << " " << d << " " << a << endl;

	getchar();
	getchar();
	return 0;
}

