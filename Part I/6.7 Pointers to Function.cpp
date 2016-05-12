#include <iostream>
using namespace std;

bool lengthCompare(const string &, const string &);
string::size_type sumLength(const string &, const string &);
bool cstringCompare(const char *, const char*)

void ff(int*);
void ff(unsigned int);

void useBigger(const string &s1, const string &s2,
               bool pf(const string &, const string &));
void useBigger(const string &s1, const string &s2,
               bool (*pf)(const string &, const string &));
// equivalent declaration:
// explicitly define the parameter as a pointer to function

int main()
{
    bool (*pf)(const string &, const string &);
    // pf is a pointer pointing to a function that takes two const string
    // references and then return a bool

    // equivalent assignment
    pf = lengthCompare;
    pf = &lengthCompare;

    // equivalent function call
    bool b1 = pf("hello", "goodbye");
    bool b2 = (*pf)("hello", "goodbye");
    bool b3 = lengthCompare("hello", "goodbye");

    pf = 0; // pf pointing to no function
    pf = sumLength; // error: return type differ
    pf = cstringCompare; // error: parameter types differ
    pf = lengthCompare; // ok: function and pointer types match exactly

    void (*pf1)(unsigned int) = ff; // pf1 points to ff unsigned
    void (*pf2)(int) = ff; // error: no ff with a matching parameter list
    double (*pf3)(int*) = ff; // error: return type of ff and pf3 don't match

    useBigger(s1, s2, lengthCompare);
    typedef bool Func(const string &, const string &);
    typedef decltype(lengthCompare) Func2;
    // equivalent type: Function type

    typedef bool (*FuncP)(const string &, const string &);
    typedef decltype(lengthCompare) *FuncP2;
    // equivalent type: pointer pointing to function
    // decltype returns the function type, not the pointer

    void useBigger(const string &, const string &, Func);
    void useBigger(const string &, const string &, FuncP2);
    // compiler will automatically convert the function type
    // represented bt Func to a pointer

    using F = int(int *, int); // F is a function type
    using PF = int(*)(int *, int); // PF is a pointer type

    // f1 is a function that takes an integer
    PF f1(int); // ok: PF is a pointer to function;
    F f1(int); // error: F is a function type; f1 can't return a function
    F *f1(int);
    int (*f1(int))(int*, int);
    auto f1(int) -> int (*)(int*, int);

    string::size_type sumLength(const string &, const string &);
    string::size_type largerLength(const string &, const string &);

    decltype(sumLength) *getFcn(const string &);

    return 0;
}
