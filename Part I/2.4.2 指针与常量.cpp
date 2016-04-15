#include<iostream>
using namespace std;

int main()
{
	const double pi=3.14;
	//double *ptr=&pi;
	const double *cptr=&pi;
	//*cptr=42;常量不能修改 
	//*ptr=25; 
	cout << pi << " " << *cptr/* << " " << *ptr*/ << endl;
	
	double p=2.7;
	cout << cptr << endl;
	cptr=&p;//cptr本身不是常量，可以修改cptr包含的地址（重新赋值），但是不能通过cptr去修改变量 
	cout << cptr << endl;
	//*cptr=2.7;
	cout << p << " " << *cptr << endl;

	getchar();
	getchar();
	return 0;
}

