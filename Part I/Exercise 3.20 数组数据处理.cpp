#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> s;
	int x;
	while (cin >> x)
		s.push_back(x);
	
	vector<int>::size_type n=s.size();
	for (int i=0;i<n-1;i++)
		cout << s[i]+s[i+1] << " ";
	cout << endl;
	
	for (int i=0;i<=(n-1)/2;i++)
	    cout << s[i]+s[n-1-i] << " ";
	
	getchar();
	getchar();
	return 0;
}


