#include<iostream>
using namespace std;

int main()
{
	int q=2;
	//int i=-1,&r=0;���ܽ����Գ��������ã���Ҫ��const���������У� 
	/*int i2;
	int *const p2=&i2;*///i2��Ҫ��������
	const int i=-1,&r=0;
	//const int *const p3=&i2; //i2��Ҫ��������
	//const int *p1=&i2;//i2��Ҫ��������
	//const int &const r2=i;//r2��Ҫ��ʼ����r2���Ƕ��󣬲��ܼ����ͣ� 
	const int i2=i,&r=1;//�Ϸ� 

	getchar();
	getchar();
	return 0;
}

