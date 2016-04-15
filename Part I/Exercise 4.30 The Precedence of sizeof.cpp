#include<iostream>
using namespace std;

struct test
{
	int men[2]={0,1};
};

int f(){}

int main()
{
	int x = 0, y = 0;
	
	test *p=new test;
	
	cout << (sizeof x + y) << endl;
	cout << (sizeof (x + y)) << endl;
	
	cout << (sizeof p->men[0]) << endl;
	cout << (sizeof (p->men[0])) << endl;
	
	cout << (sizeof x < y) << endl;
	cout << ((sizeof x) < y) << endl;
	
	cout << sizeof f() << endl;
	cout << sizeof (f()) << endl;
	
	return 0;
}
