#include<iostream>
using namespace std;

int main()
{
	string test[];
	for (const auto &s:text)
	{
		cout << s;
		if (s.empty() || s[s.size()-1]=='.')
			cout << endl;// ���У�����Զ�����
		else
			cout << " "; 
	} 
	
	if (!vec.empty())
		cout << vec[0];
	
	return 0;
}

