#include<iostream>
#include<vector>
using namespace std;

int main()
{
	bool l;
	int a[]={0,1,2};
	int b[]={0,1,2};
	vector<int> c={0,1,2};
	vector<int> d={1,2,3};
	
	if (end(a)-begin(a)==end(b)-begin(b))
	{
		l=true;
		for (auto i=0; i!=end(a)-begin(a) && l==true; ++i)
			if (a[i]!=b[i])
				l=false;
	}
	else
		l=false;
	cout << l << endl;
	
	
	if (c.size()==d.size())
	{
		l=true;
		for (auto i=0; i!=c.size() && l==true; ++i)
			if (c[i]!=d[i])
				l=false;
	}
	else
		l=false;
	cout << l << endl;
	
	cout << true << endl;
	
	return 0; 
}
