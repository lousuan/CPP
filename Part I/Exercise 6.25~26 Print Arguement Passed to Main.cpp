#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    string outcome = "";
    for (int i = 1; i != argc; ++i){
        outcome += argv[i];
        outcome += " ";
    }

    cout << outcome << endl;
}
