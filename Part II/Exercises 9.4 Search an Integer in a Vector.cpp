#include <iostream>
#include <vector>
using std::cout;
using std::vector;

vector<int>::iterator Search(vector<int>::iterator beg, vector<int>::iterator end, int num) {
    while (beg != end) {
        if (*beg == num)
            return beg;
        beg++; 
    }
    return end;
}

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5, 6, 7};
    cout << Search(numbers.begin(), numbers.end(), 9) - numbers.begin();

    return 0;
}
