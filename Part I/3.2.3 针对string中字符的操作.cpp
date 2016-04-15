#include<iostream>
using namespace std;

int main()
{
	
	string str("some string");//str="some string"
	for (char a:str)//可用auto判断 
	    cout << a << endl;//一行一个字母输出 
	
	string s="Hello World!!!";
	//decltype(s.size()) punct_cnt=0;//类型是string::size_type 
	string::size_type punct_cnt=0;
	for (char b:s)
	    if (ispunct(b)) //当b是标点符号时为真 
		    ++punct_cnt;
	cout << punct_cnt << " in " << s << endl; 
	/*
	for (auto &c:s)//这里c是一个引用，对c的操作会应用到s上
	    c=toupper(c);
	cout << s << endl; 
	
	if (!s.empty())
	    cout << s[0] << endl;//下标从0开始，到s.size（）-1结束。
	
	for
	(
	    decltype(s.size()) index=0;// string::size_type index=0;
        index!=s.size() && !isspace(s[index]);//非空字符串，遇到空格之前 
		++index	//&&只在左边为真的情况下检查右边 
	) 
	    s[index]=toupper(s[index]);//第一个单词大写 
	//使用下标要注意下标范围不能溢出。编译器不检查此类错误
	
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

