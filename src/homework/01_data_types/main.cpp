#include "data_types.h"
#include <iostream>

using std::cout;
using std::cin;

int main()
{
	int num, num1, result;

	cout << "Enter a whole number: ";
	cin >> num;
	result = multiply_numbers(num);
	displayResult(num, result);

	num1 = 4;
	result = multiply_numbers(num1);
	displayResult(num1, result);

	return 0;
}
