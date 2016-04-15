#include<iostream>
using namespace std;

int main()
{
	int i=100, sum=0;
	for(int i=0;i!=10;++i)
	  sum+=i;           //这里的i是for作用域里面的 
	cout << i << " " << sum << endl;
	
	getchar();
	getchar();
	return 0;
}
