#include<iostream>

using namespace std;

int main()
{
	string s1;
	string s2=s1;
	string s3="hiya";
	string s4(10,'c');//s4 is cccccccccc
    string s5("value");
    string s6=string(5,'a');//s6 is aaaaa。不建议，会产生中间变量。 
    cout << s5 << endl;
    

	getchar();
	getchar();
	return 0;
}

