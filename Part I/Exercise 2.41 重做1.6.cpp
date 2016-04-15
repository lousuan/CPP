#include<iostream>
#include"Sales_item_lousuan.h"
using namespace std;

struct Sales_data
{
	string ISBN;
	int number;
	double price;
};

int main()
{
	//dealare variables to hold running wum and data for the next record
	Sales_data total,trans;
	
	//is there data to process?
	if (cin >> total.ISBN >> total.number >> total.price)
	{
		//if so,read the transaction records
		while (cin >> trans.ISBN >> trans.number >> trans.price)
		  if (total.ISBN==trans.ISBN)
		  {
		      // match:update the running total
		      total.number+=trans.number;
		      total.price+=trans.number*trans.price;
	      }
		  else
		  {
		 	 // no match:print and assign to total
		 	 cout << total.ISBN << " " << total.number << " " << total.price << endl;
		 	 total.ISBN=trans.ISBN;
		 	 total.number=trans.number;
		 	 total.price=trans.number*trans.price;
		  }
	     
		  //remember to print last record
	      cout <<  total.ISBN << " " << total.number << " " << total.price << endl;
	      
	      return 0;
	}
	else
	{
		//no input!,warn the user
		cout << "No data?!" << endl;
		return -1;
	}
}
