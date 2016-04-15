#include<iostream>
using namespace std;

int main()
{
	string a;
	cin >> a;
	for (auto &b:a)
	    b='X';
	cout << a << endl;

	getchar();
	getchar();
	return 0;
}

