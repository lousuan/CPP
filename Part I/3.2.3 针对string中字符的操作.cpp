#include<iostream>
using namespace std;

int main()
{
	
	string str("some string");//str="some string"
	for (char a:str)//����auto�ж� 
	    cout << a << endl;//һ��һ����ĸ��� 
	
	string s="Hello World!!!";
	//decltype(s.size()) punct_cnt=0;//������string::size_type 
	string::size_type punct_cnt=0;
	for (char b:s)
	    if (ispunct(b)) //��b�Ǳ�����ʱΪ�� 
		    ++punct_cnt;
	cout << punct_cnt << " in " << s << endl; 
	/*
	for (auto &c:s)//����c��һ�����ã���c�Ĳ�����Ӧ�õ�s��
	    c=toupper(c);
	cout << s << endl; 
	
	if (!s.empty())
	    cout << s[0] << endl;//�±��0��ʼ����s.size����-1������
	
	for
	(
	    decltype(s.size()) index=0;// string::size_type index=0;
        index!=s.size() && !isspace(s[index]);//�ǿ��ַ����������ո�֮ǰ 
		++index	//&&ֻ�����Ϊ�������¼���ұ� 
	) 
	    s[index]=toupper(s[index]);//��һ�����ʴ�д 
	//ʹ���±�Ҫע���±귶Χ��������������������������
	
	const string mun="0123456789ABCDEF";
	string mun16="";
	string::size_type d;
	while (cin >> d)
	    if (d<mun.size())
		     mun16=mun16+mun[d]+" ";
		else 
		     mun16=mun16+"* ";
	cout << mun16 << endl;
	
	getchar();
	getchar();
	return 0;
	*/
	
	if (s.begin()!=s.end())
	{
		auto it=s.begin();
		*it=toupper(*it);
		cout << it << endl;	
	}
}

