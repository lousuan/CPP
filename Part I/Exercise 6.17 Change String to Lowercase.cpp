#include <iostream>
using namespace std;

bool HasCapitalLetters(const string &str)
{
    for (auto x : str)
        if (isupper(x)) return true;
    return false;
}

void ChangeToLowercase(string &str)
{
    for (auto &x : str)
        x = tolower(x);
}

int main()
{
    string hello("Hello World!");
    cout << HasCapitalLetters(hello) << endl;

    ChangeToLowercase(hello);
    cout << hello << endl;

    return 0;
}
