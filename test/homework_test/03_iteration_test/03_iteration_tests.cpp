#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "dna.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true)
}

TEST_CASE("Verify get content Configuration")
{
	REQUIRE(get_gc_content(AGCTATAG) == 37.5);
	REQUIRE(get_gc_content(CGCTATAG) == 50.0);
}

TEST_CASE("Verify reverse function")
{
	REQUIRE(get_reverse_string(AGCTATAG) == 'GATATCGA');
	REQUIRE(get_reverse_string(CGCTATAG) == 'GATATCGC');
}
TEST_CASE("Verify complement function")
{
	REQUIRE(get_dna_complement(AAAACCCGGT) == 'ACCGGGTTTT');
	REQUIRE(get_dna_complement(CCCGGAAAAT) == 'ATTTTCCGGG');
	
}