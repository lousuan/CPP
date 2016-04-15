#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> n;
	int x;
	while (cin >> x)
		n.push_back(x);
	cout << *(n.begin()) << " " << *(n.end()-1) << endl;
	
	for(auto i=n.begin(); i!=(n.end()-1); ++i)
		cout << *i+*(i+1) << " ";
	cout << endl;
	
	for(int i=0; !((n.begin()+i)>(n.end()-i-1)); ++i)
		cout << *(n.begin()+i)+*(n.end()-i-1) << " ";
	cout << endl;
	
	
	return 0;
}
