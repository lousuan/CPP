#include <iostream>
using namespace std;

inline bool isShorter(const string &s1, const string &s2)
{
    return s1.size() < s2.size();
}

int main()
{
    assert(word.size() > threshold);// stop the program when false
}

void print(const int ia[], size_t size)
{
    #ifndef NDEBUG
    // _ _func_ _ is a local static defined by the complier that holds the
    // function's namespace
        cerr <<　_ _func_ _ << ": array size is " << size << endl;
    #endif
    // _ _FILE_ _ string literal containing the name of the file
    // _ _LINE_ _ integer literal containing the current line number
    // _ _TTME_ _ string literal containing the time the file was compiled
    // _ _DATE_ _ string literal containing the date the file was compiled

    if (word.size() < threshold)
        cerr << "Error: " << _ _FILE_ _
            << " : in function " << _ _func_ _
            << " at line " << _ _LINE_ _ << endl
            << " Compiled on " << _ _DATE_ _
            << " at " << _ _TIME_ _ << endl
            << " Word read was \"" << word
            << "\": Length too short" << endl;
}
