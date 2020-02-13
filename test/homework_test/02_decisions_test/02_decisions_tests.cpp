#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "decision.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
TEST_CASE("verify GPA points and calculate function")
{
	REQUIRE(get_grade_points(A) == 4);
	REQUIRE(get_grade_points(B) == 3);
	REQUIRE(get_grade_points(C) == 2);
	REQUIRE(get_grade_points(D) == 1);
	REQUIRE(get_grade_points(F) == 0);

	REQUIRE(calculte_gpa(12)(45) == 3.75);
	REQUIRE(calculte_gpa(120)(390) == 3.75);
	REQUIRE(calculte_gpa(90)(180) == 3.75);
	

}