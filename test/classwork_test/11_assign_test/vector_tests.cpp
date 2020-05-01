#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "vector.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test class copy w stack variables")
{
	Vector v1(5);
	Vector v2 = v1;
	
	REQUIRE(v1.Size() == v2.Size());

	
}
TEST_CASE("Test class copy w heap variables")
{
	Vector v1(3);
	Vector v2 = v1;

	REQUIRE(v1.Size() == v2.Size());
	v1[1] = 5;

	REQUIRE(v1[1] != v2[1]);
	REQUIRE(v1[1] == 5);
	REQUIRE(v2[1] == 0);
}
TEST_CASE("Test class copy w 2 instances of Vector")
{
	Vector v1(3);
	Vector v2(3);
	v2 = v1; //v1 and v2 will have there own memory
	v1[1] = 1;

	REQUIRE(v1[1] != v2[1]);
	REQUIRE(v1[1] == 1);
	REQUIRE(v2[1] == 0);
}
TEST_CASE("Vecto capacity with reserve function call")
{
	Vector v(3);
	REQUIRE(v.Capacity() == 0);
	v.Reserve(6);
	REQUIRE(v.Capacity() == 6);
}

TEST_CASE("Vector Resize element's calue copied adn initialized")
{
	Vector v(3);
	v[0] = 1;
	v[1] = 2;
	v[2] = 3;
	v.Resize(6);

	REQUIRE(v[0] == 1);
	REQUIRE(v[1] == 2);
	REQUIRE(v[2] == 3);
	REQUIRE(v[3] == 0);
	REQUIRE(v[4] == 0);
	REQUIRE(v[5] == 0);
}