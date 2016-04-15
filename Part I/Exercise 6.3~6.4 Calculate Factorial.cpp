#include <iostream>
using namespace std;

unsigned fact(unsigned n)
{
    unsigned factorial = 1;
    for (auto i = 1; i != n+1; ++i){
        factorial *= i;
    }

    return factorial;
}

int main()
{
    unsigned n;
    cout << "Input n to calculate n! :";
    cin >> n;
    cout << fact(n) << endl;
    return 0;
}
