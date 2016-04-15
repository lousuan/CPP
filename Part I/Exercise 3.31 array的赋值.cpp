#include<iostream>
using namespace std;

int main()
{
	constexpr size_t arraysize=10;
	int a[arraysize];
	for (int i=0; i!=arraysize; ++i)
		a[i]=i;
	
	for (auto i:a)
		cout << i << " ";
	cout << endl;
	
	return 0; 
}
