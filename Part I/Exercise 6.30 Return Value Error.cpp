#include <iostream>
using namespace std;

bool str_subrange(const string &str1, const string &str2)
{
    if (str1.size() == str2.size())
        return str1 == str2;
    auto size = (str1.size() < str2.size()) ? str1.size() : str2.size();
    for (decltype(size) i = 0; i != size; ++i){
        if (str1[i] != str2[i])
            return; // error: no return value, compiler should detect this error
    }
    // error: control mght flow off the end of the function without a return
}

int main()
{
    cout << str_subrange("ABC", "AB");
    return 0;
}
