#include<iostream>
#include<vector> 
using namespace std;

int main()
{
	constexpr size_t arraysize=10;
	int a[arraysize];
	for (int i=0; i!=arraysize; ++i)
		a[i]=i;
	
	int b[arraysize];
	for (int i=0; i!=arraysize; ++i)
		b[i]=a[i];
	
	for (auto i:b)
		cout << i << " ";
	cout << endl;
	
	vector<int> c(arraysize);
	for(int i=0; i!=arraysize; ++i)
		*(c.begin()+i)=i;
	
	auto d=c;
	for (auto i:d)
		cout << i << " ";
	cout << endl;
	
	return 0; 
}
