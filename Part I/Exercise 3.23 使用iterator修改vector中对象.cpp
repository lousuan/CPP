#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> v{1,2,3,4,5,6,7,8,9,10};
	for (auto i=v.begin(); i!=v.end(); ++i)
		(*i)=2*(*i);//i=i*i
	for (auto i=v.begin(); i!=v.end(); ++i)
		cout << *i << " " ;
	cout << endl;
	
	getchar();
	getchar();
	return 0;
}
