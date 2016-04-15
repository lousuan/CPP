#include<iostream>
#include"Sales_item.h"
using namespace std;

int main()
{
	Sales_item trans1,trans2;
	int sum=1;
	
	cin >> trans1;
	
	while (cin >> trans2)
	{
		if (trans1.same_isbn(trans2))
		  ++sum;
		else
		{
			cout << "the sum is " << sum << endl;
			trans1=trans2;
			sum=1;
		}
	}
	
	cout << "the sum is " << sum << endl;
	return 0;
}
