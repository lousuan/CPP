#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> a;
	int b;
	while (cin >> b)
	    a.push_back(b);
	for (auto &c:a)
	    cout << c << " ";
	cout << endl;
	        

	getchar();
	getchar();
	return 0;
}

