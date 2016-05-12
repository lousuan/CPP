#include <iostream>
using namespace std;

void f() {
    cout << "f()";
}
void f(int i) {
    cout << "f(int i)";
}
void f(int i, int j) {
    cout << "f(int i, int j)";
}
void f(double x, double y = 3.14) {
    cout << "f(double x, double y = 3.14)";
}

int main()
{
    //f(2.56,42); // Error: call of overloaded 'f(double, int)' is ambiguous
    f(42); // f(int i)
    f(42, 0); // f(int i, int j)
    f(2.56, 3.14); // f(double x, double y = 3.14)

    return 0;
}
