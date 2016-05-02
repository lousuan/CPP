#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> &v, int n)
{
    if (n != 0) 
	
		print(v, n-1);
    	cout << v[n] << " ";
	
}

int main()
{
    vector<int> v = {0,1,2,3};
    print(v, 4);
    return 0;
}
