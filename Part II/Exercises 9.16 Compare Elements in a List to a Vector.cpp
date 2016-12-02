#include <iostream>
#include <vector>
#include <list>
using std::cout;
using std::vector;
using std::list;

bool compare (vector<int> v, list<int> l) {
    if (v.size() != l.size())
        return false;

    auto vi = v.begin();
	auto li = l.begin();
	
    for (; vi != v.end(); ++vi, ++li)
        if (*vi != *li) 
            return false; 
    
    return true;
}

int main() {
    vector<int> v1 = {1, 2};
    vector<int> v2 = {1, 2, 3};
    list<int> l1 = {1, 2};
    list<int> l2 = {1, 3};

    cout << compare(v1, l1) << compare(v2, l1) << compare(v1, l2) << compare(v2, l2);

    return 0;
}
