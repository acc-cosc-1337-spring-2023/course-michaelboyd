#include "int.h"
#include <iostream>

using std::cout;

int main()
{
    int num = 5;
    cout << "Echo the input integer [" << num << "]: " << echo_variable(num) << "\n";
    return 0;
}