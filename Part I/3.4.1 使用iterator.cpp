#include<iostream>
#include<vector>
using namespace std;

int main()
{
	string s("some string");
	if (s.begin()!=s.end())
	{
		auto it=s.begin();
		*it=toupper(*it);//*it是迭代器所指的对象
		cout << s << endl;	//第一个字母大写
	}

	for (auto it=s.begin(); it!=s.end() && !isspace(*it); ++it)
		*it=toupper(*it);
	cout << s << endl;//第一个单词大写

	/*
	vector<int>::iterator it;
	string::iterator it2;
	vector<int>::const_iterator it3;
	string::const_iterator it4;

	vector<int> v;
	const vector<int> cv;
	auto it1=v.begin();
	auto it2=cv.begin();
	auto it3=v.cbegin();

	(*it).empty();//检查it所指的对象是否为空
	*it.empty()//错误，约等于*(it.empty())
	*/
	vector<string> text={"fjdsia","sdfiafd"};
	for (auto it=text.cbegin(); it!=text.cend() &&  !it->empty(); ++it)
		cout << *it << endl;
	return 0;
}
