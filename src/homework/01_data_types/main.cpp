// write include statements
#include "data_types.h"
#include <iostream>

// write namespace using statement for cout

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	int num;
	int num1;
	int result;

	std::cout << "Enter a whole number: ";
	std::cin >> num;
	result = multiply_numbers(num);
	std::cout << "The input [" << num << "] multiplied by 5 is: " << result << "\n";

	num1 = 4;
	result = multiply_numbers(num1);
	std::cout << "The input [" << num1 << "] multiplied by 5 is: " << result << "\n";

	sreturn 0;
}
