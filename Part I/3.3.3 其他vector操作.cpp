#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> v{1,2,3,4,5,6,7,8,9};
	for (auto &i:v)
		i*=i;//i=i*i
	for (auto i:v)
		cout << i << " " ;
	cout  << endl;
	
	vector<unsigned> scores(11,0);
	unsigned grade;
	while (cin >> grade)
	{
		if (grade<=100)
			++scores[grade/10];
	}

	vector<int> ivec; //
	for (decltype(ivec.size()) ix=0; ix!=10; ++ix)
		//Ivec[ix]=ix;//会出错，空vector没有下标 
		ivec.push_back(ix);
	
	return 0;
}
