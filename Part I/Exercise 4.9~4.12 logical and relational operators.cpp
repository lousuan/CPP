#include<iostream>
using namespace std;

int main()
{
	const char *cp="Hello World";
	if (cp && *cp);//cp,*cp均不为0，所以是true 
	
	int n;
	while (cin >> n && n!=42) 
		cout << n;
	
	return 0;
}

