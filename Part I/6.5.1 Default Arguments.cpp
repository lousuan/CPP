#include <iostream>
using namespace std;

typedef string::size_type sz;
string screen(sz ht = 24, sz wid = 80, char backgrnd = ' ');
// set default argument of function

int main()
{
    string window;
    window = screen(); // screen(24,80,' ')
    window = screen(66);
    window = screen(66, 256);
    window = screen(66, 256, '#');
}

sz wd = 80;
char def = ' ';
sz ht();
string screen(sz = ht(), sz = wd, char = def);
string window = screen();

void f2()
{
    def = '*';
    sz wd = 100; // won't change the default
    window = screen(); // screen(ht(), 80, '*')
}
