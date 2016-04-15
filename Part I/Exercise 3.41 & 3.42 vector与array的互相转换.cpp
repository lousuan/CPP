#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int a[]={0,1,2,3,4,5};
	vector<int> b(begin(a),end(a));
	
	int c[b.size()];
	for (int i=0; i!=b.size(); ++i)
		c[i]=b[i];
	
	for (auto i:c)
		cout << i << " ";
	cout << endl;
	
	return 0;
}

