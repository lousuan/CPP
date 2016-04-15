#include<iostream>
#include<vector> 
using namespace std;

int main()
{
	vector<vector<int>> ivec;//{}
	vector<string> svec=ivec;//出错。vector<int>不能复制给string 
	vector<string> sevc(10,"null");
	//{"null","null","null","null","null","null","null","null","null","null"} 
	

	getchar();
	getchar();
	return 0;
}

