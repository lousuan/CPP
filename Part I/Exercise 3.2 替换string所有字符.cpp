#include<iostream>
using namespace std;

int main()
{
	string a;
	cin >> a;
	for (char &b:a)//����b��һ�����ã���b�Ĳ�����Ӧ�õ�a��
	    b='x';		
	cout << a <<  endl; 

	getchar();
	getchar();
	return 0;
}

