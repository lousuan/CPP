#include<iostream>
using namespace std;

int main()
{
	string s1,s2;
	cin >> s1 >> s2;
	if (s1.size()==s2.size())
	    cout << s1 << "和" << s2 << "一样长。" << endl;
	else
	{
		if(s1.size()>s2.size())
		    cout << s1 << "比" << s2 << "长。" << endl;
		else
		    cout << s2 << "比" << s1 << "长。" << endl; 
	}	 

	getchar();
	getchar();
	return 0;
}

