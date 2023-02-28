#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "checking_account.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test checking account constructor")
{
	CheckingAccount account(100);
	REQUIRE(account.get_balance() == 100);
}

// TEST_CASE("Test checking account - get balance") 
// {
// 	CheckingAccount account;
// 	REQUIRE(account.get_balance() == 0);
	
// }
