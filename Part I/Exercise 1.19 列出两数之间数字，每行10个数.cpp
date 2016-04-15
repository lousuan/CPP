#include<iostream>
using namespace std;
int main()
{
	int a,b,c,r;
	
	cout << "Enter two numbers:" << endl;
	cin >> a >> b;
	
	if (a>b)
	{
		c=b;
		b=a;
		a=c;
	}
	
	for (;a<=b;++a)
    {
	  cout << a << " ";
	  ++r;
	  if (r>9)
	  {
	  	r=0;
	  	cout << endl;
	  }
    }
		
	getchar();
	getchar();
	return 0;
}
