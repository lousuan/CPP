#include <iostream>
using namespace std;

int main()
{
    unsigned vowelCnt = 0;
    char ch;
    while (cin >> ch){
        switch (ch){
            case 'a': case 'e': case 'i': case 'o': case 'u':
            //case 3.14: //error: noninteger as case label
            //case ival: //error: nonconstant as case label
            ++vowelCnt;
            break;
        }
    }

    bool temp = true;
    switch (temp){
        case true:
            string file_name; //error: control bypasses an implicitly initialized variable
            int ival = 0; //error: control bypasses an explicitly initialized variable
            int jval; //ok: jval is not initialized
            break; //put these four statement into a brace will work
        case false:
            jval = next_num();

    }
}
