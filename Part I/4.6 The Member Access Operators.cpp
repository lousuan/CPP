#include<iostream>
using namespace std;

int main()
{
	string s1="a string", *p=&s1;
	auto n=s1.size();
	n=(*p).size();
	n=*p.size(); //错误，p是一个指针，没有一个menber size 
	n=p->size();

	return 0;
}

