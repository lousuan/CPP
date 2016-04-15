#include<iostream>
using namespace std;

int main()
{
	const int i=42;
	auto j=i;//j是int 
	const auto &k=i;//k是const引用，指向const int 
	auto *p=&i;//p是指向i的指针 
	const auto j2=i,&k2=i;//j2是const int,k2是i的引用
	//i=1;
	j=2;
	//k=3;
	p=&j2;
	//j2=4;
	//k2=5; 

	getchar();
	getchar();
	return 0;
}

