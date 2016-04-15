#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<string> a={"da","daf","Daf"};
	auto iter=a.begin();
	//cout << *iter++;
	//cout << *++iter;
	//cout << (*iter)++; error
	//cout << *iter.empty(); error
	cout << iter->empty();
	//cout << ++*iter;error chat can't ++
	cout << iter++->empty();
		
	return 0;
}

