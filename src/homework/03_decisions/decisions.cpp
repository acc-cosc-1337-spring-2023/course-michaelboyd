#include "decisions.h"
#include <limits>

/// @brief Convert a number grade to a letter grade
/// @param grade numeric value for the grade to convert
/// @return alpha representation of the grade
std::string get_letter_grade_using_if(int grade)
{
    std::string result;

    if (grade >= 90)
    {
        result = "A";
    }
    else if (grade < 90 && grade >= 80)
    {
        result = "B";
    }
    else if (grade < 80 && grade >= 70)
    {
        result = "C";
    }
    else if (grade < 70 && grade >= 60)
    {
        result = "D";
    }
    else if (grade < 60 && grade >= 0)
    {
        result = "F";
    }
    else
    {
        result = "Invalid Input";
    }
    return result;
}

/// @brief Convert a number grade to a letter grade
/// @param grade numeric value for the grade to convert
/// @return alpha representation of the grade
std::string get_letter_grade_using_switch(int grade)
{
    std::string result;
    const int max_value = std::numeric_limits<int>::max();

    switch (grade)
    {
    case 90 ... max_value:
        result = "A";
        break;
    case 80 ... 89:
        result = "B";
        break;
    case 70 ... 79:
        result = "C";
        break;
    case 60 ... 69:
        result = "D";
        break;
    case 0 ... 59:
        result = "F";
        break;
    default:
        result = "Invalid Input";
        break;
    }

    return result;
}