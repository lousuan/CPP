#include<iostream>
#include"Sales_item.h"
using namespace std;

int main()
{
	Sales_item item,sum;
	
	cin >> sum;
	
	while (cin >> item)
	  sum+=item;
	  
	cout << sum << endl;
    
	getchar();
	getchar();
	return 0;
}
