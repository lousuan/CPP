#include <iostream>
using namespace std;
int main()
{
    int amount = 0, value;
    // ��������ֱ�������ļ�������������������ĸ����ĸ���
    
    cout << "Enter numbers and end inputing with " << "'eof'";
    
    while (cin >> value)
    if (value < 0) ++amount;
    
    cout << "Amount of all negative values read is "
               << amount << endl;
    

    getchar();
    getchar();
    return 0;
}
