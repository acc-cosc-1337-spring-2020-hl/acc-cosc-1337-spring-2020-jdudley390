#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "vectors.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test Max function")
{
	vector<int> nums{ 3, 8, 1, 99, 1000 };
	int max = get_max_from_vector(nums);
	REQUIRE(max == 1000);

	nums = { 15, 12, 11, 99, 88 };
	max = get_max_from_vector(nums);
	REQUIRE(max == 99);

	nums = { 150, 120, 11, 990, 88888 };
	max = get_max_from_vector(nums);
	REQUIRE(max == 88888);

}
TEST_CASE("Test is prime function")
{
	REQUIRE(is_prime(2) == true);
	REQUIRE(is_prime(4) == false);
	REQUIRE(is_prime(43) == true);
	REQUIRE(is_prime(44) == false);
}
TEST_CASE("Test is prime vectors function")
{
	auto primes = vector_of_primes(10);
	vector<int>prime_vec{ 2, 3, 5, 7 };
	REQUIRE(primes == prime_vec);

	primes = vector_of_primes(50);
	vector<int> primes_of_50{ 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47 };
	REQUIRE(primes == primes_of_50);
	

}