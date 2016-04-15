#include <iostream>
using namespace std;

double absolute(double x)
{
    return (x < 0 ? -x : x);
}

int main()
{
    double x;
    cout << "Input a number to calculate the absolute value: ";
    cin >> x;
    cout << absolute(x);

    return 0;
}
