#include <iostream>
#include <vector>
using std::cout;
using std::vector;

bool Search(vector<int>::iterator beg, vector<int>::iterator end, int num) {
    while (beg != end) {
        if (*beg == num)
            return true;
        beg++; 
    }
    return false;
}

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5, 6, 7};
    cout << Search(numbers.begin(), numbers.end(), 4);

    return 0;
}
