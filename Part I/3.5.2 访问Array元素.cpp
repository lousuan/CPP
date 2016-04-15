#include<iostream>
#include<cstddef>
using namespace std;

int main()
{
	unsigned scores[11]={};
	unsigned grade;
	while (cin >> grade)
		if (grade <= 100)
			++score[grade/10];
			
	for (auto i:scores)
		cout << i << " ";
	cout << endl;
	
	return 0;
}
