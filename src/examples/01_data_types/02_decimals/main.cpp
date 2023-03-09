#include "decimals.h"
#include <iostream>

using std::cout;

int main()
{
    double num = 3;
    cout << "The result of input " << num << " for add_to_double_1 is: " << add_to_double_1(num) << "\n";
    cout << "The result of input " << num << " for add_to_double_2 is: " << add_to_double_2(num) << "\n";
    return 0;
}