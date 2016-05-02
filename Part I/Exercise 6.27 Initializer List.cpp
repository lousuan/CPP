#include <iostream>
#include <initializer_list>
using namespace std;

int sum(initializer_list<int> const list)
{
    int s = 0; // s is the sum
    for (int i : list)
        s += i;
    return s;
}

int main()
{
    initializer_list<int> list = {0,1,2,3,4,5};
    cout << sum(list);
    return 0;
}
