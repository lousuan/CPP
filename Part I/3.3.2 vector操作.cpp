#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> v1;
	for(int i=0;i!=100;++i)
	    v1.push_back(i);//¸³Öµ
	for(auto &j:v1)
	    cout << j << " ";
	cout << endl;
	
	string word;
	vector<string> text; 
	while (cin >> word)
	{
	  	text.push_back(word);
	}
	

	getchar();
	getchar();
	return 0;
}

