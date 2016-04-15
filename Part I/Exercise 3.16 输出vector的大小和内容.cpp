#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> v1;
	vector<int> v2(10);
	vector<int> v3(10, 42);
	vector<int> v4{10};
	vector<int> v5{10, 42};
	vector<string> v6{10};
	vector<string> v7{10, "hi"};
	
	vector<vector<int>> v={v1,v2,v3,v4,v5};
	for (auto a:v)
	{
		cout << "The size is" << a.size() << endl;
		for (auto b:a)
			cout << b << " ";
		cout << endl;
	}
	
	vector<vector<string>> w={v6,v7};
	for (auto a:w)
	{
		cout << "The size is" << a.size() << endl;
		for (auto b:a)
			cout << b << " " ;
		cout << endl;
	}
		
	getchar();
	getchar();
	return 0;
} 
