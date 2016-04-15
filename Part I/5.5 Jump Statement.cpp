#include <iostream>
using namespace std;

int main()
{
    begin:
        int sz = 0;
        if (sz <= 0){
            goto begin;
        }
    //sz is destroyed when the goto executes
    return 0;
}
