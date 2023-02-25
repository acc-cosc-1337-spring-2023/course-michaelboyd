#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "function_str.h"

using std::string;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test string function params val and ref") {
	string str1 = "C++";
	string str2 = "Java";
	string str3 = "Python";

	str_val_ref_param(str1, str2, str3);

	REQUIRE(true == true);
}
