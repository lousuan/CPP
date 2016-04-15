#include<iostream> 
#include"Sales_item.h"
using namespace std;

int main()
{
	Sales_item item1,item2;
	cin >> item1 >> item2;//read a pair of transactions
	cout << item1+item2 << endl;//print their sum
	return 0;
}
