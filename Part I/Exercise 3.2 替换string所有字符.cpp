#include<iostream>
using namespace std;

int main()
{
	string a;
	cin >> a;
	for (char &b:a)//这里b是一个引用，对b的操作会应用到a上
	    b='x';		
	cout << a <<  endl; 

	getchar();
	getchar();
	return 0;
}

