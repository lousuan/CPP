#include<iostream>
using namespace std;

int main()
{
	int i=0,&r=i;
	auto a=r;
	const int ci=i,&cr=ci;
	auto b=ci;
	auto c=cr;
	auto d=&i;
	auto e=&ci;
	const auto f=ci;
	auto &g=ci;
	
	cout << a << " " << b << " " << c << " " 
	     << d << " " << e << " " << g << endl;
	
	a=42;//0 42
	b=42;//0 42
	c=42;//0  此处cr相当于ci，是const int，整数，来赋值给c，c是int 
	//d=42;//地址 出错，不能把int赋值给int*类型 
	//e=42;//地址 出错，不能把int赋值给const int*类型
	//g=42;//0 g是ci，常量，不可赋值 
	
	cout << a << " " << b << " " << c << " " 
	     << d << " " << e << " " << g << endl;

	getchar();
	getchar();
	return 0;
}

