#include <iostream>
using namespace std;

int Max(int n, int *m)
{
    return (n > *m ? n : *m);
}

int main()
{
    int a = 0, b = 1, *c = &b;
    cout << Max(a, c);

    return 0;
}
