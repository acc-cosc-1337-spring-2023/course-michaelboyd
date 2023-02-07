#include "hwexpressions.h"
#include <iostream>

using std::cin;
using std::cout;
using std::string;

int main()
{

	double meal_amount, tip_rate, tip_amount, tax_amount, total;
	string meal_amount_prompt = "Enter the Amount of the Meal: ";
	string tip_rate_prompt = "Enter the Tip % (e.g. 20)   : ";

	cout << "\n";
	cout << meal_amount_prompt;
	cin >> meal_amount;
	tax_amount = get_sales_tax_amount(meal_amount);

	cout << tip_rate_prompt;
	cin >> tip_rate;
	tip_amount = get_tip_amount(meal_amount, tip_rate);
	total = meal_amount + tax_amount + tip_amount;

	displayReceipt(meal_amount, tax_amount, tip_amount, total);

	return 0;
}
