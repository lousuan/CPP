#include<iostream>
using namespace std;
//�ó��������˵���������ڲ����˶�����ȫ�ֱ���ͬ�����±���
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
