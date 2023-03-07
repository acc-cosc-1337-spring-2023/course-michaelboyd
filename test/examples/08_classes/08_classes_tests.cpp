#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "checking_account.h"
#include "savings_account.h"


TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test checking account constructor")
{
	CheckingAccount account(100);
	REQUIRE(account.get_balance() == 100);
}

TEST_CASE("Test checking account creation balance > 0") 
{
	CheckingAccount account;
	REQUIRE(account.get_balance() > 0);
	
}

TEST_CASE("Verify checking account deposit") {
	CheckingAccount account(500);
	REQUIRE(account.get_balance() == 500);
	account.deposit(50);
	REQUIRE(account.get_balance() == 550);
	account.deposit(-50);
	REQUIRE(account.get_balance() == 550);
}

TEST_CASE("Verify checking account withdraw valid amounts") {
	CheckingAccount account(500);
	REQUIRE(account.get_balance() == 500);
	
	account.withdraw(50);
	REQUIRE(account.get_balance() == 450);
}

TEST_CASE("Verify checking account withdraw invalid amounts") {
	CheckingAccount account(500);
	REQUIRE(account.get_balance() == 500);
	
	account.withdraw(-50);
	REQUIRE(account.get_balance() == 500);

	account.withdraw(600);
	REQUIRE(account.get_balance() == 500);

}

TEST_CASE("Test bank and savings account get balance overridden") {
	BankAccount account(100);
	REQUIRE(account.get_balance() == 100);

	SavingsAccount savings(100);
	REQUIRE(savings.get_balance() == 105);
}
