#include<iostream>
#include"Sales_item.h"
using namespace std;

int main()
{
	Sales_item book;
	//����ISBN���۳���ı��������ۼ۸�
	cout << "Enter transactions:" << endl;
	while (cin >> book)
	{
	//���ISBN���۳���ı����������룬ƽ���۸�	
	cout << "ISBN, number of copies sold, total revenue, average price are:" << endl;
	cout << book << endl;
    }
    
    getchar();
	getchar();
	return 0; 
}
