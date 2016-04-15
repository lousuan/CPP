#include<iostream>
using namespace std;

int main()
{
	string a;
	cin >> a;
	for (int i=0;i<a.size();i++)
	    a[i]='X';
    cout << a << endl;

	getchar();
	getchar();
	return 0;
}

