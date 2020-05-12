#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "vector.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test class copy w stack variables")
{
	Vector v1(3);
	Vector v2 = v1;
	
	REQUIRE(v1.Size() == v2.Size());
	//v1.set_size(5);
	//REQUIRE(v1.Size == 5);
	//REQUIRE(v2.Size == 3); //This test case proves that class copies of static variable
					       // point to two different places on the stack and don't hold addresses
						   //but hold values or their on contents

	
}

TEST_CASE("Test class copy with dynamic memory/heap variable")
{
	Vector v1(3); //this says vector v1 has a size of 3
	Vector v2 = v1; 

	REQUIRE(v1.Size() == v2.Size());
	v1[1] = 5; //This is saying the vector at location 1 equals 5
	REQUIRE(v1[1] != v2[1]);
	v1[1] = 5; //assigns element 1 the value of 5

	REQUIRE(v1[1] != v2[1]); //v2 is under second constructor(which just copies 1) which gives each instance of a (v)
	//different memory addresses which mean when v1 is modify it doesn't effect v2
	REQUIRE(v1[1] == 5);
	REQUIRE(v2[1] == 0);
}
