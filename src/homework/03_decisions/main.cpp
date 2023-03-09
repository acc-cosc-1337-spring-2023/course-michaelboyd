#include <iostream>
#include "decisions.h"

using std::cout;
using std::cin;

int main() 
{
	auto selection = 0;
	std::string result;
	auto grade = 0;
	const std::string ENTER_GRADE_PROMPT = "Enter the grade number: ";
	const std::string GRADE_RESULT_TEXT =  "The letter grade is   : ";

	display_menu();
	cin>>selection;

	if (selection == 1)
	{
		cout << ENTER_GRADE_PROMPT;
		cin >> grade;
		result = get_letter_grade_using_if(grade);
	}
	else if (selection == 2)
	{
		cout << ENTER_GRADE_PROMPT;
		cin >> grade;
		result = get_letter_grade_using_switch(grade);
	}
	else if (selection == 3)
	{
		return 0;
	}
	else
	{
		cout << "Invalid Selection" << "\n";
		return 0;
	}

	if (result == INVALID_INPUT_TXT)
	{
		cout << "The grade number is out of range" << "\n";
	}
	else
	{
		cout << GRADE_RESULT_TEXT << result << "\n";
	}

	return 0;
}