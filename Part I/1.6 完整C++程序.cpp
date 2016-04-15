#include<iostream>
#include"Sales_item.h"
using namespace std;

int main()
{
	//dealare variables to hold running wum and data for the next record
	Sales_item total,trans;
	
	//is there data to process?
	if (cin >> total)
	{
		//if so,read the transaction records
		while (cin >> trans)
		  if (total.same_isbn(trans))
		    // match:update the running total
		    total+=trans;
		  else
		  {
		 	 // no match:print and assign to total
		 	 cout << total << endl;
		 	 total=trans;
		  }
	     
		  //remember to print last record
	      cout <<  total << endl;
	      
	      return 0;
	}
	else
	{
		//no input!,warn the user
		cout << "No data?!" << endl;
		return -1;
	}
}
