#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> v1;//0
	vector<int> v2(10);//10
	vector<int> v3(10,42);//10��42 
	vector<int> v4{10};//1��10 
	vector<int> v5{10,42};//2����10��42 
	vector<string> v6{10};//10
    vector<string> v7{10,"hi"};//10��hi
	
	cout << v1.size() << " "
         << v2.size() << " "
         << v3.size() << " "
         << v4.size() << " "
         << v5.size() << " "
         << v6.size() << " "
         << v7.size() << endl;
              
	getchar();
	getchar();
	return 0;
}

