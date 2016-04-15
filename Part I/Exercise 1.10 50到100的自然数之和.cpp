#include<iostream>
using namespace std;
int main()
{
    int sum1=0,i1=50;
    int sum2=0,i2=50;
    
    for (;i1<=100;++i1)
      sum1+=i1;
    cout << "sum1=" << sum1 << endl;
    
    while (i2<=100)
    {
          sum2+=i2;
          ++i2;
    }
    cout << "sum2=" << sum2 << endl;

    getchar();
    getchar();
    return 0;
}      
