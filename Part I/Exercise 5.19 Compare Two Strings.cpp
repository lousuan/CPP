#include <iostream>
using namespace std;

int main()
{
    char again = 'n'; //used in the condition; can't be defined inside the do
    do {
        string string1, string2;
        cout << "Input two string.\nstring 1:" << string1;
        cin >> string1;
        cout << "string 2:";
        cin >> string2;

        int temp = string1.compare(string2);
        if (temp < 0)
            cout << string1 << "is less than " << string2 << endl;
        else if (temp == 0)
            cout << "Two strings are indentical" << endl;
        else
            cout << string2 << "is less than " << string1 << endl;

        cout << "More(y/n)? ";
        cin >> again; //input yes to compute again
    }while (again == 'y');

    return 0;
}
