#include<iostream>
using namespace std;

int main()
{
	int i=43;
	const int &r1=i;
	const int &r2=42;
	const int &r3=r1*2;
	//int &r4=r1*2;r1�ǳ�����������int��r4ȥ����
	//r1=1;
	//r2=2;
	//r3=3;r1��r2��r3���ǳ��������ܸ�ֵ 
	cout << i << " " << r1 << " " << r2 << " " << r3 << endl;
	
	i=41;
	cout << i << " " << r1 << " " << r2 << " " << r3 << endl;
	//����ͨ��r1��r2��r3ȥ�޸�i��������ֱ���޸�i 
	
	double dval=3.14;
	const int &r=dval; //��dvalת����int���͵�3 
	cout << r << endl;

	getchar();
	getchar();
	return 0;
}

