#include<iostream>
using namespace std;

int main()
{
	int grade=0;
	cin >> grade;
	cout << ((grade < 60) ? "fail" : (grade < 75) ? "low pass" : (grade >90) ? "high pass" : "pass");
	
	if (grade < 60)
		cout << "fail";
	else if (grade < 75)
		cout << "low pass";
	else if (grade > 90)
		cout << "high pass";
	else
		cout << "pass";
	
	return 0;
}

