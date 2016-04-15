#include<iostream>
#include<cstring> 
using namespace std;

int main()
{
	char a[]="";
	char a1[]="This is";
	char a2[]="a program.";
	//char a3[]="wrong";
	
	strcpy(a,a1);
	strcat(a," ");
	strcat(a,a2);
	
	cout << a << endl;
	
	return 0;
}

