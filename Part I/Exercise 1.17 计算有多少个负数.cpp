#include <iostream>
using namespace std;
int main()
{
    int amount = 0, value;
    // 读入数据直到遇见文件结束符，计算所读入的负数的个数
    
    cout << "Enter numbers and end inputing with " << "'eof'";
    
    while (cin >> value)
    if (value < 0) ++amount;
    
    cout << "Amount of all negative values read is "
               << amount << endl;
    

    getchar();
    getchar();
    return 0;
}
