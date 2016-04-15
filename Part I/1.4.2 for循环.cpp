#include<iostream>
using namespace std;
int main()
{
    int sum=0;
    
    //sum values from 1 up to 10 inclusive
    for (int val=1;val<= 10;++val)
      sum+=val;//equvialent to sum=sum+val
    cout << "Sun of 1 to 10 inclusive is " << sum << endl;
    //退出循环后val不可用 
    
    getchar();
    getchar();
    return 0;
}
