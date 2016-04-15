#include <iostream>
using namespace std;

void swap(int *&m, int *&n)
{
    int *l = m;
    m = n;
    n = l;
}

int main()
{
    int a = 0, b = 1 , *c = &a, *d = &b;
    swap(c, d);
    cout << *c << " " << *d;
}
