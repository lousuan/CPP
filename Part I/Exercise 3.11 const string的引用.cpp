#include<iostream>
using namespace std;

int main()
{
	const string s="Keep out!";
	for (auto &c:s)
	{ 
	    c='x';
	    cout << c;
	}
	cout << endl;

	getchar();
	getchar();
	return 0;
}

