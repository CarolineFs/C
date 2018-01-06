#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item book;
    Sales_item sum;
    int flag = 0;

    while (std::cin >> book)
    {
        if (flag)
        {
            sum = book;
            flag = 1;
        }
        else
        {
           sum += book;
        }
    }
    std::cout << sum << std::endl;

    return 0;
}
