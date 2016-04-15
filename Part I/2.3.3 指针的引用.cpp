#include<iostream>
using namespace std;

int main()
{
	int i=42;
	int *p;
	//int *&r=p;//&r表明r是引用，*表明&r是对指针的引用    从右往左读 
	*r=&i;
	*r=0;
	
	cout << *r << " " << i << endl;

	getchar();
	getchar();
	return 0;
}

