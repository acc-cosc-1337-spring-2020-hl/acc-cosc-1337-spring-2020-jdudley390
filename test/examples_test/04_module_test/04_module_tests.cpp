#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "checking_account.h"
#include<memory>
#include "savings_account.h"

using std::unique_ptr; using std::make_unique;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test Bank Account get_balance")
{
	CheckingAccount account(150);

	REQUIRE(account.get_balance() == 150);
}

TEST_CASE("Test Savings Account deposit")
{
	unique_ptr<BankAccount> account = make_unique<SavingsAccount>(150);
	REQUIRE(account->get_balance() == 150);

	REQUIRE_THROWS_AS(account->deposit(-50),
		InvalidAmount);
	REQUIRE(account->get_balance() == 150);

	account->deposit(50);

	REQUIRE(account->get_balance() == 200);
}

TEST_CASE("Test BankAccount withdraw")
{
	unique_ptr<BankAccount> account = make_unique<SavingsAccount>(150);
	REQUIRE(account->get_balance() == 150);

	REQUIRE_THROWS_AS(account->withdraw(-5),
		InvalidAmount);
	REQUIRE(account->get_balance() == 150);

	account->withdraw(50);
	REQUIRE(account->get_balance() == 100);

	REQUIRE_THROWS_AS(account->withdraw(101),
		InvalidAmount);
	REQUIRE(account->get_balance() == 100);
}
TEST_CASE("Test bank account get rate")
{
	BankAccount account;
	
	REQUIRE(account.get_rate() == .025);
}
