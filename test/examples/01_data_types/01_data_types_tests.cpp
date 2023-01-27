#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "int.h"
#include "decimals.h"
#include "char.h"

// TEST_CASE("Verify Test Configuration", "verification") {
// 	REQUIRE(true == true);
// }

/*test case echo_variable */
TEST_CASE("Test echo_variable", "input number should equal output number")
{
	REQUIRE(echo_variable(5) == 5);		// assertion
	REQUIRE(echo_variable(10) == 10);	// assertion
	REQUIRE(echo_variable(100) == 100); // assertion
}

/*test case add_to_double_1 with 0 as parameter*/
TEST_CASE("Verify add_to_double_1 with 0 as parameter ", "verify number returned is .9")
{
	double input = 0;
	double expected = 0.9;
	REQUIRE((add_to_double_1(input) * 10) == (expected * 10));
}

/*test case add_to_double_1 with 1 as parameter*/
TEST_CASE("Verify add_to_double_1 with 1 as parameter ", "verify number returned is 1.9")
{
	double input = 1;
	double expected = 1.9;
	REQUIRE((add_to_double_1(input) * 10) == (expected * 10));
}

/*test case add_to_double_2 with 0 as parameter*/
TEST_CASE("Verify add_to_double_2 with 0 as parameter ", "verify number returned is 1.5")
{
	double input = 0;
	double expected = 1.5;
	REQUIRE((add_to_double_2(input) * 10) == (expected * 10));
}

/*test case add_to_double_2 with 1 as parameter*/
TEST_CASE("Verify add_to_double_2 with 1 as parameter ", "verify number returned is 2.5")
{
	double input = 1;
	double expected = 2.5;
	REQUIRE((add_to_double_2(input) * 10) == (expected * 10));
}

/*test case char test ASCII values */
TEST_CASE("Verify Test characters as numbers", "verify char input equals a int value")
{
	REQUIRE(get_char_ascii_value('A') == 65);
	REQUIRE(get_char_ascii_value('a') == 97);
}

/*test case string test ASCII values Joe characters are equal to 74, 111, and 101*/
TEST_CASE("Verify Test characters as numbers for Joe", "verify char input equals a int value for Joe")
{
	REQUIRE(get_char_ascii_value('J') == 74);
	REQUIRE(get_char_ascii_value('o') == 111);
	REQUIRE(get_char_ascii_value('e') == 101);
}
