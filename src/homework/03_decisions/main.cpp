#include <iostream>
#include "decisions.h"

using std::cout;
using std::cin;

int main() 
{
	auto selection = 0;
	std::string result;
	auto grade = 0;
	const std::string enter_grade_prompt = "Enter the grade number: ";
	const std::string grade_result_text =  "The letter grade is   : ";

	display_menu();
	cin>>selection;

	if(selection == 1) {
		cout<<enter_grade_prompt;
		cin>>grade;
		result = get_letter_grade_using_if(grade);
		cout<<grade_result_text<<result<<"\n";
	}
	else if(selection == 2) {
		cout<<enter_grade_prompt;
		cin>>grade;
		result = get_letter_grade_using_switch(grade);
		cout<<grade_result_text<<result<<"\n";	  
	}
	else if(selection == 3) {
		return 0;
	}
	else {
		cout<<"Invalid Selection"<<"\n";
	}

	return 0;
}