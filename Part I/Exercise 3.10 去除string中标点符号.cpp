#include<iostream>
using namespace std;

int main()
{
	string a;
	cin >> a;
	for (char &b:a) 
        if (!ispunct(b))
            cout << b;
    cout << endl;
    
    
	getchar();
	getchar();
	return 0;
}

