#include "Chapter6.h"

double absolute(double x)
{
    return (x < 0 ? -x : x);
}

unsigned fact(unsigned n)
{
    unsigned factorial = 1;
    for (auto i = 1; i != n+1; ++i){
        factorial *= i;
    }

    return factorial;
}
