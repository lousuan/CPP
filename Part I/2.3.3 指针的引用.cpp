#include<iostream>
using namespace std;

int main()
{
	int i=42;
	int *p;
	//int *&r=p;//&r����r�����ã�*����&r�Ƕ�ָ�������    ��������� 
	*r=&i;
	*r=0;
	
	cout << *r << " " << i << endl;

	getchar();
	getchar();
	return 0;
}

