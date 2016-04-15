#include<iostream>
using namespace std;

int main()
{
	short i=32767;
	i++;
	
	int j=2147483647;
	j++;
	
	long k=2147483647;
	k++;
	
	cout << i << ' ' << j << ' ' << k;
	
	return 0;
}

