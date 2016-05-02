#include <iostream>
using namespace std;

string::size_type find_char(const string &s, char c, string::size_type &occurs)
{
    auto ret = s.size();
    occurs = 0;
    for (decltype(ret) i = 0; i != s.size(); ++i)
        if (s[i] == c){
            if (ret == s.size())
                ret == i;
            ++occurs; //counting
        }
    }
    return ret; //count is return implicitly in occurs
}

const int ci = 42;
int i = ci;
int * const p = &i;// p can't be assigned anymore
*p = 0;

void fcn(const int i){/* fcn an read but not write to i */}
void fcn(int i){} //error: redefines fcn(const int)

int i = 42;
const int *cp = &i; //cp can't change i
const int &r = i; //r can't change i
const int &r2 = 42; //ok
int *p = cp; // error: p and cp don't match
int &r3 = r; // error: r3 and r don't match
int &r4 = 42; // error: can't initiallize a plain reference from a literal

int i = 0;
const int ci = i;
string::size_type ctr = 0;
reset(&i); // calls the version of reset that has an int* parameter
reset(&ci); // error: can't initiallize an int* from a pointer to a const int object
reset(i); // calls reset(int &i)
reset(ci); // error: can't bind a plain reference to the const object ci
reset(42); // error: can't bind a plain reference to a literal
reset(ctr); // error: types don't match; ctr has an unsigned type
find_char("Hello World!",'o',ctr); // ok

bool is_sentence(const string &s)
{
    string::size_type ctr = 0;
    return find_char(s, '.', ctr) == s.size() - 1 && ctr == 1;
}

void print(int (*matrix)[10], int rowsize)
void print(int matrix[][10], int rowsize)
