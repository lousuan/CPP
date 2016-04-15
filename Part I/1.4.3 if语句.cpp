#include<iostream>
using namespace std;
int main()
{
    int v1,v2,inf,sup,sum=0;
    
    cout << "Enter two numbers:" << endl;
    cin >> v1 >> v2; //read input
    
    /*use smaller number as lower bound for summation
      and lager number as upper bound*/
    if (v1<v2)
    {
        inf=v1;
        sup=v2;
    }
    else
    {
        inf=v2;
        sup=v1;
    }
    
    //sum values form lower up to and including upper
    for (int val=inf; val<=sup;++val)
    sum+=val;//sum=sum+val
    
    cout << "Sum of the number between "
         << inf << " and " << sup << " is "
         << sum << endl;
         
    getchar();
    getchar();
    return 0;
}
