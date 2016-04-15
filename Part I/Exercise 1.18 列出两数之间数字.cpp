#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	
	cout << "Enter two numbers:" << endl;
	cin >> a >> b;
	
	if (a>b)
	{
		c=b;
		b=a;
		a=c;
	}
	
	for (;a<=b;++a)
	  cout << a << " ";
	
	getchar();
	getchar();
	return 0;
}
