#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	string s1,s2;
	cin >> s1;
	cin >> s2;
	cout << ((s1>s2)? s1 : s2) << endl;
	
	char a1[]="a";
	char a2[]="b";
	cout << (strcmp(a1,a2)>0? a1 : a2) << endl;
	cout << ((a1>a2)? a1 : a2) << endl; //�ƺ����з�0��ֵ��Ϊ�棿 �������������֧��ֱ�ӱȽ�����C-style string�� 
	
	return 0;
}

