#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	/*
	C-style string: char[]={'a','\0'}
	C++ style string: char[]={'a'}
	*/
	char ca[]={'C','+','+',};
	cout << strlen(ca) << endl;//灾难：输出ca的过程没办法停止，因为缺少'\0' 
	
	string s1="A string example";
	string s2="A different string";
	if (s1<s2) //false,s1>s2 is true
	
	const char ca1[]="A string example"; 
	const char ca2[]="A different string";
	if (ca1<ca2) //undefined: 比较两个不相关的address
	if (strcmp(ca1,ca2)<0) //与16行的string比较相同 
	
	string largeStr=s1+' '+s2;
	
	strcpy(largeStr, ca1);
	strcat(largeStr, " ");
	strcat(largeStr, ca2);
	
	return 0;
}
