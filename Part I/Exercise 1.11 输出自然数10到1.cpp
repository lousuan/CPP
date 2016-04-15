#include<iostream>
using namespace std;
int main()
{
    int i=10,j=10;
    
    while (i>=0)
    {
          cout << i << " ";
          --i;
    }
    
    cout << endl;
    
    for  (j;j>=0;--j)
      cout << j << " ";
    cout << endl;
    
    getchar();
    getchar();
    return 0;
}
