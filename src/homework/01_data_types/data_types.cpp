#include "data_types.h"
#include <iostream>

using std::cout;

// write function code here
int multiply_numbers(int num1)
{
	int num2 = 5;
	return num1 * num2;
}

void displayResult(int input, int result)
{
	cout << "The result of using input [" << input << "] is: " << result << "\n";
}
