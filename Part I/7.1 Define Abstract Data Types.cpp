#include <iostream>
#include "Sales_data.h"

double Sales_data::avg_price() const {
    //avg_price is in the scope of the Sales_data class
    if (units_sold)
        return revenue/units_sold;
    else
        return 0;
}

Sales_data & Sales_data:: combine(const Sales_data & rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this; // return the object on which the function was called
}

// io stream are types tha cannot be copied.
istream & read(istream & is, Sales_data & item)
{
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}

ostream & print(ostream & os, const Sales_data & item)
{
    os << item.isbn() << " " << item.units_sold << " " << item.revenue
       << " " << item.avg_price();
    return os;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}
