#include<iostream>
using namespace std;

int main()
{
	char grade;
	int score;
	cout << "input the grade (A, B, C, D):";
	cin >> grade;
	
	if (grade == 'A' || grade == 'a')
		score = 95;
	else if (grade == 'B' || grade == 'b')
		score = 85;
	else if (grade == 'C' || grade == 'c')
		score = 75;
	else if (grade == 'D' || grade == 'd')
		score = 65;
	else
	{
		cout << "Invaild grade.";
		return 0;
	}	
	
	cout << "The corresponding score is " << score << endl;
	
	cout << (grade == 'A' ? "95" : (grade == 'B' ? "85" : (grade == 'C' ? "75" : (grade == 'D' ? "65" : "Invaild grade."))));
	
	return 0;
}

