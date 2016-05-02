#include <iostream>
using namespace std;

void swap(int &v1, int &v2)
{
    if (v1 == v2) return; // if the values are already the same, no need to swap
    int temp = v2;
    v2 = v1;
    v1 = temp;
}

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

string make_plural(size_t ctr, const string &word, const string &ending)
{
    return (ctr > 1) ? word + ending : word;
}

const string &manip()
{
    // Never return a reference or pointer to a local object
    string ret;
    if (!ret.empty())
        return ret; // WRONG: returning a reference to a local object
    else
        return "Empty"; // WRONG: "Empty" is a local temporary string
}

int main()
