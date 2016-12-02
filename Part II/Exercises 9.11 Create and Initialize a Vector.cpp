#include <iostream>
#include <vector>
using std::cout;
using std::vector;

int main() {
    vector<int> v1 = {1, 2};
    vector<int> v2 = v1;
    vector<int> v3(v1);
    vector<int> v4(v1.begin(), v1.end());
    vector<int> v5(2, 1); // 1 1
    vector<int> v6(10); // 0 0 0 0 0 0 0 0 0 0
}