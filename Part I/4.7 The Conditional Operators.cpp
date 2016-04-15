#include<iostream>
using namespace std;

int main()
{
	string finalgrade=(grade<60) ? "fall" : "pass";
	finalgrade=(grade>90) ? "hish pass" : (grade < 60) ? "fall" : "pass";
	
	cout << ((grade < 60) ? "fail" : "pass";//correct
	cout << (grade < 60) ? "fail" : "pass";//wrong: print 1 or 0
	cout << grade < 60 ? "fail" : "pass";///error: compares cout to 60
	
	return 0;
}

