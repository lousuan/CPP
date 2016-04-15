#include<iostream>
using namespace std;

int main()
{
	string test[];
	for (const auto &s:text)
	{
		cout << s;
		if (s.empty() || s[s.size()-1]=='.')
			cout << endl;// 空行，句号自动换行
		else
			cout << " "; 
	} 
	
	if (!vec.empty())
		cout << vec[0];
	
	return 0;
}

