#include<iostream>
using namespace std;
int main()
{
	int sum=0,value;
	//read till end-of-file,
	//calculating a running total of all values read
	
	while (cin >> value)
	  sum+=value; //sum=sum+value
	
	cout << "Sum is: " << sum << endl;
	
	getchar();
	getchar();
	return 0;
}
