#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "func.h"

TEST_CASE("Verify get_gc_content") {
	REQUIRE(get_gc_content("AGCTATAG") == .375);
	REQUIRE(get_gc_content("CGCTATAG") == .50);
	REQUIRE(get_gc_content("AAATATAT") == .00);
	REQUIRE(get_gc_content("GCGCGCGCGC") == 1.0);
	REQUIRE(get_gc_content("agctatag") == .375);
}

TEST_CASE("Verify get_reverse_string") {
	REQUIRE(get_reverse_string("ABCDEFG") == "GFEDCBA");
	REQUIRE(get_reverse_string("AGCTATAG") == "GATATCGA");
	REQUIRE(get_reverse_string("CGCTATAG") == "GATATCGC");
}

TEST_CASE("Verify get_dna_compliment") {
	REQUIRE(get_dna_compliment("AAAACCCGGT") == "ACCGGGTTTT");
	REQUIRE(get_dna_compliment("CCCGGAAAAT") == "ATTTTCCGGG");
	REQUIRE(get_dna_compliment("aaaacccggt") == "ACCGGGTTTT");	
}

