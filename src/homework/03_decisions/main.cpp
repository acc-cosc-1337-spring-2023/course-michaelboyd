#include <iostream>
#include "decisions.h"

using std::cout;
using std::cin;

int main() 
{
	auto selection = 0;
	std::string result;
	auto grade = 0;

    cout<<"\n";
	cout<<"       MAIN MENU       "<<"\n\n";
	cout<<"1-Letter grade using if"<<"\n";
	cout<<"2-Letter grade using switch"<<"\n";
	cout<<"3-Exit"<<"\n\n";
	cin>>selection;

	if(selection == 1) {
		cout<<"Enter the grade: ";
		cin>>grade;
		result = get_letter_grade_using_if(grade);
		cout<<"The grade is a : "<<result<<"\n";
	}
	else if(selection == 2) {
		cout<<"Enter the grade: ";
		cin>>grade;
		result = get_letter_grade_using_switch(grade);
		cout<<"The grade is a : "<<result<<"\n";	  
	}
	else if(selection == 3) {
		return 0;
	}
	else {
		cout<<"Invalid Selection"<<"\n";
	}

	return 0;
}