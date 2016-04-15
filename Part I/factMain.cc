#include <iostream>
#include "Chapter6.h"
using namespace std;

int main()
{
    unsigned n;
    cout << "Input n to calculate n! :";
    cin >> n;
    cout << fact(n) << endl;
    cout << absolute(n) << endl;

    return 0;
}
