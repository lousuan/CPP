#include<iostream>
#include"Sales_item.h"
using namespace std;

int main()
{
	Sales_item book;
	//读入ISBN，售出书的本数，销售价格
	cout << "Enter transactions:" << endl;
	while (cin >> book)
	{
	//输出ISBN，售出书的本数，总收入，平均价格	
	cout << "ISBN, number of copies sold, total revenue, average price are:" << endl;
	cout << book << endl;
    }
    
    getchar();
	getchar();
	return 0; 
}
