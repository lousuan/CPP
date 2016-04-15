#include <iostream>
using namespace std;
#include "Sales_data.h"

int main()
{
    Sales_data data, *p;
    sizeof (Sales_data);
    sizeof data;
    sizeof p;
    sizeof *p; //size of type to which p points i.e., sizeof(Sales_data)
    sizeof data.revenue;
    sizeof Sales_data::revenue;

    constexpr size_t sz = sizeof(ia)/size(*ia);
    int arr2[sz];
}
