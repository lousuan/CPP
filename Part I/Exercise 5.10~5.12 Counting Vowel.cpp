#include <iostream>
using namespace std;

int main()
{
    unsigned count[11];
    const char single_char[] = {'a','e','i','o','u',' ','\t','\n'};
    const char double_char[] = {'f','i','l'};
    char input;
    bool match = false;

    for (auto &x : count)
        x = 0;
    for (auto x : count)
        cout << x;
    cout << endl;

    while (cin >> input){
        for (int i = 0; i < 8; ++i)
            if (single_char[i] == input)
                ++count[i];

        if (match){
            for (int i = 0; i < 3; ++i)
                if (double_char[i] == input)
                    ++count[8+i];
        }

        if (input == 'f')
            match = true;
        else
            match = false;
    }

    for (int i = 0; i < 8; ++i)
        cout << single_char[i] << ": " << count[i] << endl;
    for (int i = 0; i < 3; ++i)
        cout << 'f' << double_char[i] << ": " << count[8+i] << endl;

    return 0;
}
