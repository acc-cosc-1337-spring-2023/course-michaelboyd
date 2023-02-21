#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "default.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify get_gross_pay default params") {
	REQUIRE(get_gross_pay(40) == 800);
	REQUIRE(get_gross_pay(40, 10) == 400);
	REQUIRE(get_gross_pay() == 800);
}

TEST_CASE("Verify get_gross_pay overloaded") {
	REQUIRE(get_gross_pay(40,10,100) == 401);
}

TEST_CASE("Verify get_gross_pay overloaded with double") {
	REQUIRE(get_gross_pay(40,7.5) == 300);
}

