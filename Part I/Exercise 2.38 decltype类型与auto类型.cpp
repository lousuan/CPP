#include<iostream>
using namespace std;

int main()
{
	int a=1;
	decltype(a) b=a;
	auto c=a;
	
	b=11;
	cout << b << endl;
	c=12;
	cout << c << endl;
	
	int d=2,&e=d;
	decltype(e) f=d;
	auto g=e;
	
	cout << f << " " << d << " " << g << endl;
	g++;
	f=5;
    cout << f << " " << d << " " << g << endl;
    
	getchar();
	getchar();
	return 0;
}

