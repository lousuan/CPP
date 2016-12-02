#ifndef SCREEN_H
#define SCREEN_H

using std::cin;
using std::cout;

class Screen {

public:
    typedef std::string::size_type pos;
//  using pos = std::string::size_type;
    Screen() = default; 
    Screen(pos ht, pos wd, char c): height(ht), width(wd), contents(ht * wd, c){}

    char get() const {
        return contents[cursor];
    }
    inline char get(pos ht, pos wd) const;
    Screen &move(pos r, pos c);

    char Screen::get(pos r, pos c) const {
        pos row = r * width;
        return contents[row + c];
    }
    void some_member() const; 
    
private:
    pos cursor = 0;
    pos height =0, width = 0;
    std::string contents;
    mutable size_t access_ctr;//即使在一个const对象内也能被修改
}

inline
Screen &Screen::move(pos r, pos c) {
    pos row = r * width;
    cursor = row + c;
    return *this;
}

void Screen::some_member() const {
    ++access_ctr;
}