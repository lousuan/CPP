#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> num1 = {0,1,1,2},
                num2 = {0,1,1,2,3,5,8};
    int range = num1.size() > num2.size() ? num1.size() : num2.size();
    bool match = true;
    for (int i = 0; i < range && match == true; ++i)
        if (num1[i] != num2[i])
            match == false;
    cout << match;
    return 0;
}
