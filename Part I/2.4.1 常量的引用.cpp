#include<iostream>
using namespace std;

int main()
{
	int i=43;
	const int &r1=i;
	const int &r2=42;
	const int &r3=r1*2;
	//int &r4=r1*2;r1是常量，不能用int的r4去引用
	//r1=1;
	//r2=2;
	//r3=3;r1、r2、r3都是常量，不能赋值 
	cout << i << " " << r1 << " " << r2 << " " << r3 << endl;
	
	i=41;
	cout << i << " " << r1 << " " << r2 << " " << r3 << endl;
	//不能通过r1、r2、r3去修改i，但可以直接修改i 
	
	double dval=3.14;
	const int &r=dval; //把dval转换成int类型的3 
	cout << r << endl;

	getchar();
	getchar();
	return 0;
}

