#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "vectors.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test Max function")
{
	vector<int> nums{ 3, 8, 1, 99, 1000 };
	get_max_from_vector(nums);
	REQUIRE()


}