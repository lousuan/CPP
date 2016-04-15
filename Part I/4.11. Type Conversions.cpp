#include <iostream>
using namespace std;

int main()
{
    int i, j;
    double slope = i/j;

    double slope = static_cast<double>(j) / i;
    void* p = &d;

    double *dp = static_cast<double*>(p);

    const char *pc;
    char *p = const_cast<char*>(pc);

    const char *cp;
    char *q = static_cast<char*>(cp);
    static_cast<string>(cp);
    const_cast<string>(cp); //error: const_cast only changes constness

    int *ip;
    char *pc = reinterpret_cast<char*>(ip);
}
