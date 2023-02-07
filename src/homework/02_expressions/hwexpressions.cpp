#include "hwexpressions.h"
#include <iostream>

using std::cout;
using std::string;

/// @brief calculates sales tax for a given meal amount
/// @param meal_amount
/// @return sales tax amount
double get_sales_tax_amount(double meal_amount)
{
	return TAX_RATE * meal_amount;
}

/// @brief calculates the tip amount given a meal amount and tip rate
/// @param meal_amount
/// @param tip_rate
/// @return tip amount
double get_tip_amount(double meal_amount, double tip_rate)
{
	return meal_amount * (tip_rate / 100);
}

/// @brief displays a formatted receipt containg cost details of the meal
/// @param meal_amount
/// @param tax_amount
/// @param tip_amount
/// @param total
void displayReceipt(double meal_amount, double tax_amount, double tip_amount, double total)
{
	string new_line_char = "\n";

	cout << new_line_char;
	cout << "=========================" << new_line_char;
	cout << "Meal Amount: " << meal_amount << new_line_char;
	cout << "Sales Tax  : " << tax_amount << new_line_char;
	cout << "Tip Amount : " << tip_amount << new_line_char;
	cout << "Total      : " << total << new_line_char;
	cout << "=========================" << new_line_char;
	cout << new_line_char;
}
