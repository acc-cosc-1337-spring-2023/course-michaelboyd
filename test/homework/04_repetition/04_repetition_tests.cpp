#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "dna.h"

TEST_CASE("Verify factorial") 
{
	REQUIRE(factorial(0) == 1);
	REQUIRE(factorial(1) == 1);
	REQUIRE(factorial(3) == 6);
	REQUIRE(factorial(5) == 120);
	REQUIRE(factorial(6) == 720);
	REQUIRE(factorial(10) == 3628800);
	REQUIRE(factorial(12) == 479001600);
}

