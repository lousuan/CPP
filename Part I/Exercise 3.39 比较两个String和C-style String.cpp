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
	cout << ((a1>a2)? a1 : a2) << endl; //似乎所有非0的值均为真？ 并且这个编译器支持直接比较两个C-style string？ 
	
	return 0;
}

