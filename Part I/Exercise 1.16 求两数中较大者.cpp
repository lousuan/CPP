#include<iostream>
using namespace std;
int main()
{
    double a,b;
    
    cout << "Enter two numbers:" << endl;
    cin >> a >> b;
    cout << "The lager one is "; 
    
    if (a>b) cout << a << endl;
    else cout << b << endl;

    getchar();
    getchar();
    return 0;
}    
