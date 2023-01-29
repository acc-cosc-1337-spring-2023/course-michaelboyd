#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "data_types.h"

TEST_CASE("Verify Test Configuration", "verification")
{
	REQUIRE(true == true);
}

TEST_CASE("Verify sum_numbers function")
{
	REQUIRE(add_numbers(5, 5) == 10);
	REQUIRE(add_numbers(10, 10) == 20);
}

TEST_CASE("Test Multiply Numbers", "Verify expected output is 5 times the value of the input")
{
	int input;
	int expected;

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
