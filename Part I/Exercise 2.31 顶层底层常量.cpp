#include<iostream>
using namespace std;

int main()
{
	int i=0;
	int *const p1=&i;
	const int v2=0;
	int v1=v2;
	int *pi=&v1,&r1=v1;
	const int *p2=&v2,*const p3=&i,&r2=v2;
	r1=v2;
	//p1=p2;//p1�ǳ��������ܱ���ֵ�� 
	p2=p1;
	//p1=p3;//p2ָ��const int���ͣ����ܱ���ֵ��ָ��int���͵�ָ�룿
	p2=p3;

	getchar();
	getchar();
	return 0;
}

