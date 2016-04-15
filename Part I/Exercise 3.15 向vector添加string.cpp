#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<string> a;
	string b;
	while (cin >> b)
	    a.push_back(b);
	for (auto &c:a)
	    cout << c << endl;
	        

	getchar();
	getchar();
	return 0;
}

