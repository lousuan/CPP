#include<iostream>
using namespace std;
int main()
{
	int a,b,sum=0;
	
	cout << "Enter two numbers:";
	cin >> a >> b;
	
	for (;a<=b;++a)
	  sum+=a;
	  
	cout << sum << endl;
	
	getchar();
	getchar();
	return 0;
}
