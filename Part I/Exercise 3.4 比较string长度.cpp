#include<iostream>
using namespace std;

int main()
{
	string s1,s2;
	cin >> s1 >> s2;
	if (s1.size()==s2.size())
	    cout << s1 << "��" << s2 << "һ������" << endl;
	else
	{
		if(s1.size()>s2.size())
		    cout << s1 << "��" << s2 << "����" << endl;
		else
		    cout << s2 << "��" << s1 << "����" << endl; 
	}	 

	getchar();
	getchar();
	return 0;
}

