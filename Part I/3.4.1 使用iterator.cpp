#include<iostream>
#include<vector>
using namespace std;

int main()
{
	string s("some string");
	if (s.begin()!=s.end())
	{
		auto it=s.begin();
		*it=toupper(*it);//*it�ǵ�������ָ�Ķ���
		cout << s << endl;	//��һ����ĸ��д
	}

	for (auto it=s.begin(); it!=s.end() && !isspace(*it); ++it)
		*it=toupper(*it);
	cout << s << endl;//��һ�����ʴ�д

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

	(*it).empty();//���it��ָ�Ķ����Ƿ�Ϊ��
	*it.empty()//����Լ����*(it.empty())
	*/
	vector<string> text={"fjdsia","sdfiafd"};
	for (auto it=text.cbegin(); it!=text.cend() &&  !it->empty(); ++it)
		cout << *it << endl;
	return 0;
}
