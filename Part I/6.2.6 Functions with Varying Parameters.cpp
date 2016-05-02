#include <iostream>
#include <initializer_list>
using namespace std;

void error_msg(initializer_list<string> il)
{
    for (auto beg = il.begin(); beg != il.end(); ++beg)
        cout << *beg << " ";
    cout << endl;
}

void error_msg(ErrCode e, initializer_list<string> il)
{
    cout << e.msg() << ": ";
    for (const auto &elem : il)
        cout << elem << " ";
    cout << endl;
}

int main()
{
    string expected, actual;
    if (expected != actual)
        error_msg({"functionX", expected, actual});
    else
        error_msg({"functionX", "okay"});

    string expected, actual;
    if (expected != actual)
        error_msg(ErrCode(42), {"functionX", expected, actual});
    else
        error_msg(ErrCode(0), {"functionX", "okay"});
}
