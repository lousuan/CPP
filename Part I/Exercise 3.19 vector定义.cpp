#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> a(10,42);
	vector<int> b{42,42,42,42,42,42,42,42,42,42};
    vector<int> c={42,42,42,42,42,42,42,42,42,42};
    
	for (int &d:a)
	    cout << d << " ";
	    cout << endl;
   
    for (int &e:b)
	    cout << e << " ";
	    cout << endl;

	for (int &f:c)
	    cout << f << " ";
	    cout << endl;

	getchar();
	getchar();
	return 0;
}

