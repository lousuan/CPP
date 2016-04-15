#include<iostream>
#include<vector>
using namespace std;

int main()
{
	cout << 5+10*20/2 << endl;//105
	
	vector<int> vec={0,1,2,3};
	cout << *vec.begin() << ' ' << *vec.begin()+1 << endl;//0 1

	cout << 12/3*4+5*15+24%4/2 << endl;//91
	
	cout << -30*3+21/5 << ' ' << -30+3*21/5 << endl;//-86 -18
	cout << 30/3*21%5 << ' ' << -30/3*21%4 << endl;//0 -2
	
	int a;
	cout << "Input a integer:";
	cin >> a;
	if (a%2==0)
		cout << a << " is an even.";
	else
		cout << a << " is an odd.";

	return 0;
}

