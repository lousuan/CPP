#include<iostream>
using namespace std;

int main()
{
	string a;
	int i=0;
	cin >> a;
	while (i<a.size())
	{ 
	    a[i]='X';
	    i++;
    }
    cout << a << endl;

	getchar();
	getchar();
	return 0;
}

