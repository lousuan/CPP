#include<iostream>
using namespace std;
//该程序仅用于说明：函数内部不宜定义与全局变量同名的新变量
int reused=42;

int main()
{
	int unique=0;
	cout << reused << " " << unique << endl;
	int reused=0;
	cout << reused << " " << unique << endl;
	unique=::reused;
	cout << ::reused << " " << unique << endl;
	
	getchar();
	getchar();
	return 0;
} 
