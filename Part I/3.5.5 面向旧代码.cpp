#include<iostream>
using namespace std;

int main()
{
	string s("Hello World");
	
	char *str=s;//error:不能用string初始化*char 
	const char *str=s.c_str();
	
	int int_arr[]={0,1,2,3,4,5};
	vector<int> ivec(begin(int_arr),end(int_arr));
	vector<int> subVec(int_arr+1,int_arr+4); 
	
	return 0;
}

