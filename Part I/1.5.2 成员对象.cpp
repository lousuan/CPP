#include<iostream>
#include"Sales_item.h"
using namespace std;

int main()
{
	Sales_item item1,item2;
	
	cin >> item1 >> item2;
	//first check taht item1 and item2 represent the same book
	
	if (item1.same_isbn(item2))
	{
		cout << item1+item2 << endl;
		
		getchar();
		getchar();
		return 0;//indicate success
	} 
	else
	{
		cerr << "Data must refer to smae ISBN" << endl;
		
		getchar();
		getchar();
		return -1;//indicate failure
	}
}
