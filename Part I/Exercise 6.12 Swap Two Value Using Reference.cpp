#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int m = 1, n = 2;
    swap(m, n);
    cout << m << " " << n;

    return 0;
}
