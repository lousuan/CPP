#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<string> text={"dfadfji","dffas","","dfadifafj"};
	
	for (auto i=text.begin();i!=text.end() && !i->empty(); ++i)
		for (auto &j:(*i)) //应该定义j为引用，而不是char，否则不能指向原来的对象 
		{
			j=toupper(j);
			cout << j;
		}	
	cout << endl; 
	
	for (auto i:text)
		if(i=="")
			cout << endl;
		else
			cout << i << " ";
		
	getchar();
	getchar();
	return 0;
}
