#include <iostream>
#include <stdexcept>
#include "Sales_item.h"
using namespace std;

int main()
{
    Sales_item item1, item2;
    while (cin >> item1 >> item2) {
        try{
            if (item1.isbn() != item2.isbn())
                throw runtime_error("Data must refer to same ISBN");
            cout << item1 + item2 << endl;
        }
        catch (runtime_error err) {
            cout << err.what() << "\nTry Again(y/n)?" << endl;
            char c;
            cin >> c;
            if (!cin || c == 'n')
                break;
        }
    }

    return 0;
}
