#include<iostream> 
#include<string>
using namespace std;

int main()
{
    /*
	string s1=string(5,'a');//s6 is aaaaa�������飬������м������ 
    cout << s1 << endl;
    string s2=string(5,'A');
    if (s1==s2) cout << "1" << endl;
    if (s1!=s2) cout << "2" << endl;//���Դ�Сд 
    
    string s;
    cin >> s;
    cout << s << endl;//�Կո�Ϊ�ֽ磬ֻ���յ�һ���ո�ǰ������ 
    
	string word;
    while (cin >> word)
        cout << word << endl;
    *///�������뵥�ʣ������ո���������� 
    
    /*
	string line;
    //read input a line at a time until end-of-line
	while (getline(cin,line)) 
        cout << line << endl;
	*///�������뵥�ʣ���������ֹͣ��Ȼ����������У����лᱻ�����ַ���������Կ��С� 
	
	/*
	string line;
	while (getline(cin,line))
	    if (!line.empty()) 
		    cout << line << endl; 
    //ͬ�ϣ����ǿ��б����� 
    
    string line;
	while (getline(cin,line))
	    if (line.size()>10) 
		    cout << line << endl; 
	
	auto a=line.size();

	string b="hello";
	string c="hello world";
	string d="hi";
	string e="Hi";
	if (e<d) cout << "1" << endl;//Сд�ȴ�д�� 
   	 
    string a="a\n",b="c",c="sfdd";
    a=a+b+c;
    cout << a << endl;
	*/
	
	
	string s1="hello";
	string s2="world";
	string s3=s1+","+s2+"\n";
	string s4=s1+",";
	//string s5="hello"+",";//�Ӻ���������Ҫ��һ��string
	string s6=s1+","+"world";//�൱�� string s6=��s1+","��+"world"
	//string s7="hello"+","+s2;//�Ӻ���������Ҫ��һ��string
	//"sjfaiifjda"����string�����ǿ���ת��Ϊstring 
	
	getchar();
	getchar();
	return 0;
}

