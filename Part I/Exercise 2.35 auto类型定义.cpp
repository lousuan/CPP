#include<iostream>
using namespace std;

int main()
{
	const int i=42;
	auto j=i;//j��int 
	const auto &k=i;//k��const���ã�ָ��const int 
	auto *p=&i;//p��ָ��i��ָ�� 
	const auto j2=i,&k2=i;//j2��const int,k2��i������
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

