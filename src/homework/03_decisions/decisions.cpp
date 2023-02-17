#include "decisions.h"
#include <iostream>

/// @brief Convert a number grade to a letter grade
/// @param grade numeric value for the grade to convert
/// @return alpha representation of the grade
std::string get_letter_grade_using_if(int grade)
{
    std::string result;

    if (grade <=100 && grade >= 90)
    {
        result = GRADE_A;
    }
    else if (grade < 90 && grade >= 80)
    {
        result = GRADE_B;
    }
    else if (grade < 80 && grade >= 70)
    {
        result = GRADE_C;
    }
    else if (grade < 70 && grade >= 60)
    {
        result = GRADE_D;
    }
    else if (grade < 60 && grade >= 0)
    {
        result = GRADE_F;
    }
    else
    {
        result = INVALID_INPUT_TXT;
    }
    return result;
}

/// @brief Convert a number grade to a letter grade
/// @param grade numeric value for the grade to convert
/// @return alpha representation of the grade
std::string get_letter_grade_using_switch(int grade)
{
    std::string result;

    switch (grade)
    {
    case 90 ... 100:
        result = GRADE_A;
        break;
    case 80 ... 89:
        result = GRADE_B;
        break;
    case 70 ... 79:
        result = GRADE_C;
        break;
    case 60 ... 69:
        result = GRADE_D;
        break;
    case 0 ... 59:
        result = GRADE_F;
        break;
    default:
        result = INVALID_INPUT_TXT;
        break;
    }

    return result;
}

void display_menu() {
    std::cout<<"\n";
	std::cout<<"       MAIN MENU       "<<"\n\n";
	std::cout<<"1-Letter grade using if"<<"\n";
	std::cout<<"2-Letter grade using switch"<<"\n";
	std::cout<<"3-Exit"<<"\n\n";    
}