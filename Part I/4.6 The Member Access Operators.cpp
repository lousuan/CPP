#include<iostream>
using namespace std;

int main()
{
	string s1="a string", *p=&s1;
	auto n=s1.size();
	n=(*p).size();
	n=*p.size(); //����p��һ��ָ�룬û��һ��menber size 
	n=p->size();

	return 0;
}

