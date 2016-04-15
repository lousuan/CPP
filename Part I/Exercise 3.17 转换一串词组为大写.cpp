#include<iostream>
#include<vector>
using namespace std;

int main()
{
	string a;
	vector<string> b;
	while (cin >> a)
	{
        for (char &c:a)
		    c=toupper(c);	
	    b.push_back(a);
    };
    for (string &d:b)
        cout << d << endl;	

	getchar();
	getchar();
	return 0;
}

