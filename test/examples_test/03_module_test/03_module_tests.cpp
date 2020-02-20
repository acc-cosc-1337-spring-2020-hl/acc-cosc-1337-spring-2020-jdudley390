#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "while.h"
#include "value_ref.h"
#include "for_ranged.h"
#include "vec.h"
#include<string>
TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test sum of squares function")
{
	//REQUIRE(sum_of_squares(3) == 14);
	//REQUIRE(sum_of_squares(4) == 30);
}

TEST_CASE("Test value and ref function")
{
	int num1 = 5, num2 = 10;
	
	pass_by_val_and_ref(num1, num2);

	REQUIRE(num1 == 5);
	REQUIRE(num2 == 50);
	
}

TEST_CASE("Test fo ranged loop by reference")
{
	string name = "Joe";
	loop_string_w_auto_ref(name);

	REQUIRE(name == "zzz");
}

TEST_CASE("loop vector with index value parameter")
{
	vector<int> nums{ 9, 10, 99, 5, 67};
	vector<int> expected{ 9, 10, 99, 5, 67 };

	loop_vector_w_index(nums);

	REQUIRE(nums == expected);
}

TEST_CASE("loop vector with index ref")
{
	vector<int> nums{ 9, 10, 99, 5, 67 };
	vector<int> expected{ 0, 0, 0, 0, 0};

	loop_vector_w_index_ref(nums);
	

	REQUIRE(nums == expected);
}