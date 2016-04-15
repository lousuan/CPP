#include<iostream>
using namespace std;

int main()
{
	struct Sales_data
	{
		string bookNo;
		unsigned units_sold=0;
		double revenue=0.0;
	}
	accum,trans,*salesptr;
	/*以上相当于
	struct Sales_data{...};
	Sales_data accum,trans,*salesptr;
	*/
	
	getchar();
	getchar();
	return 0;
}

