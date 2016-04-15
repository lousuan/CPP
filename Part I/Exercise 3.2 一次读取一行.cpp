#include<iostream>
using namespace std;

int main()
{
	string line,sum;
	while(getline(cin,line))
	    sum=sum+line+"\n";
	cout << sum << endl; 

	getchar();
	getchar();
	return 0;
}

