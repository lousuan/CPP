#include <iostream>
using namespace std;

int fact(int val)
{
    int ret = 1;
    while (val > 1)
        ret *=val--;
    return ret;
}

int main()
{
    int j = fact(5);
    cout << "5! is " << j << endl;

    fact("hello");// error: wrong argument type
    fact(); // error: too few argument
    fact(42, 10, 0); // error : too many arguments
    fact(3.14); // ok: argument is converted to int

    return 0;
}
