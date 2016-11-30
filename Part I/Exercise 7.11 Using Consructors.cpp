#include <iostream>
#include "Sales_data.h"

int main()
{
    Sales_data data1 = Sales_data();
    Sales_data data2 = Sales_data("7-5327-1710-0");
    Sales_data data3 = Sales_data("7-5327-1710-0", 1, 5);
    Sales_data data4 = Sales_data(std::cin);

    print(std::cout, data1);
    print(std::cout, data2);
	print(std::cout, data3);
	print(std::cout, data4);
}
