#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "data_types.h"

TEST_CASE("Test Multiply Numbers", "Verify expected output is 5 times the input integer value")
{
	int input, expected;

	input = 10;
	expected = 50;
	REQUIRE(multiply_numbers(input) == expected);

	input = 2;
	expected = 10;
	REQUIRE(multiply_numbers(input) == expected);

	input = 0;
	expected = 0;
	REQUIRE(multiply_numbers(input) == expected);

	input = -10;
	expected = -50;
	REQUIRE(multiply_numbers(input) == expected);	
}
