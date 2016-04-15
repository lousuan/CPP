#include <iostream>
using namespace std;

void swap(int *m, int *n)
{
    int temp = *m;
    *m = *n;
    *n = temp;
}

int main()
{
    int m, n;
    m = 1;
    n = 0;
    cout << m << ' ' << n << endl;
    swap(&m, &n);
    cout << m << ' ' << n << endl;
    return 0;
}
