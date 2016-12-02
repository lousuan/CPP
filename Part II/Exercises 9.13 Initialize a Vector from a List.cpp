#include <iostream>
#include <vector>
#include <list>
using std::cout;
using std::vector;
using std::list;

int main() {
    list<int> l = {1, 2};
    /*
    vector<int> v;
    for (auto i : l)
        v.push_back(i);
    
    for (auto i : v)
        cout << i << " ";
    */
    vector<int> v(l.begin(), l.end());
}