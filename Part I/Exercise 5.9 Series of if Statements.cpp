#include <iostream>
using namespace std;

int main()
{
    unsigned vowel_count= 0;
    char ch;
    while (cin >> ch){
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            ++vowel_count;
    }

    cout << vowel_count;
    return 0;
}
