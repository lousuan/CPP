#include<iostream>
using namespace std;

int main()
{
	const double pi=3.14;
	//double *ptr=&pi;
	const double *cptr=&pi;
	//*cptr=42;���������޸� 
	//*ptr=25; 
	cout << pi << " " << *cptr/* << " " << *ptr*/ << endl;
	
	double p=2.7;
	cout << cptr << endl;
	cptr=&p;//cptr�����ǳ����������޸�cptr�����ĵ�ַ�����¸�ֵ�������ǲ���ͨ��cptrȥ�޸ı��� 
	cout << cptr << endl;
	//*cptr=2.7;
	cout << p << " " << *cptr << endl;

	getchar();
	getchar();
	return 0;
}

