#include<iostream>
using namespace std;

int main()
{
	int i = 1;
	double d = 2.5;
	i *= d;
	cout << i;

	string s = "1";
	const string *ps = &s;

	char c = '2';
	char *pc = &c;
	void *pv;

	//pv = (void*)ps;
	//cout << pv << endl;
	pv = static_cast<void*>(const_cast<string*>(ps));
	cout << pv << endl;

	//i = int(*pc);
	//cout << i << endl;
	i = static_cast<int>(*pc);
	cout << i << endl;

	//pv = &d;
	pv = static_cast<void*>(&d);
	cout << pv << endl;

	//pc = (char*)pv;
	//cout << pc << endl;
	pc = static_cast<char*>(pv);
	cout << pc << endl;

	return 0;
}
