#include<iostream>
using namespace std;

struct Sales_data
{
    string ISBN;
	double price;
	int num;
};

int main()
{
	Sales_data item1,item2;
	cin >> item1.ISBN >> item1.num >> item1.price;
	//cout << "a" << endl;
	cin >> item2.ISBN >> item2.num >> item2.price;
	
	if (item1.ISBN==item2.ISBN)
	{
		int Num=item1.num+item2.num;
		if (Num=0) 
		    cout << "Error!" << endl;
		else
		{
			double income=item1.num*item1.price+item2.num*item2.price;
			cout << item1.ISBN << " " << Num << " " << income << endl;
		}
	}
	else
	cout << "Error!" << endl;
	
	getchar();
	getchar();
	return 0;
}
