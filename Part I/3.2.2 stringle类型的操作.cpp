#include<iostream> 
#include<string>
using namespace std;

int main()
{
    /*
	string s1=string(5,'a');//s6 is aaaaa。不建议，会产生中间变量。 
    cout << s1 << endl;
    string s2=string(5,'A');
    if (s1==s2) cout << "1" << endl;
    if (s1!=s2) cout << "2" << endl;//忽略大小写 
    
    string s;
    cin >> s;
    cout << s << endl;//以空格为分界，只接收第一个空格前的内容 
    
	string word;
    while (cin >> word)
        cout << word << endl;
    *///不断输入单词，遇到空格输出并换行 
    
    /*
	string line;
    //read input a line at a time until end-of-line
	while (getline(cin,line)) 
        cout << line << endl;
	*///不断输入单词，遇到换行停止，然后输出，换行，换行会被当作字符。不会忽略空行。 
	
	/*
	string line;
	while (getline(cin,line))
	    if (!line.empty()) 
		    cout << line << endl; 
    //同上，但是空行被忽略 
    
    string line;
	while (getline(cin,line))
	    if (line.size()>10) 
		    cout << line << endl; 
	
	auto a=line.size();

	string b="hello";
	string c="hello world";
	string d="hi";
	string e="Hi";
	if (e<d) cout << "1" << endl;//小写比大写大 
   	 
    string a="a\n",b="c",c="sfdd";
    a=a+b+c;
    cout << a << endl;
	*/
	
	
	string s1="hello";
	string s2="world";
	string s3=s1+","+s2+"\n";
	string s4=s1+",";
	//string s5="hello"+",";//加号两边至少要有一个string
	string s6=s1+","+"world";//相当于 string s6=（s1+","）+"world"
	//string s7="hello"+","+s2;//加号两边至少要有一个string
	//"sjfaiifjda"不是string，但是可以转换为string 
	
	getchar();
	getchar();
	return 0;
}

