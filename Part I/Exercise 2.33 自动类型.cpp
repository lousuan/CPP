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
	c=42;//0  �˴�cr�൱��ci����const int������������ֵ��c��c��int 
	//d=42;//��ַ �������ܰ�int��ֵ��int*���� 
	//e=42;//��ַ �������ܰ�int��ֵ��const int*����
	//g=42;//0 g��ci�����������ɸ�ֵ 
	
	cout << a << " " << b << " " << c << " " 
	     << d << " " << e << " " << g << endl;

	getchar();
	getchar();
	return 0;
}

