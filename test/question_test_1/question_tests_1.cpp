#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question1.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Test factorial")
{
	REQUIRE(get_factorial_sequence(3) == "3x2x1=6");
	REQUIRE(get_factorial_sequence(4) == "4x3x2x1=24");
	REQUIRE(get_factorial_sequence(5) == "5x4x3x2x1=120");
	REQUIRE(get_factorial_sequence(6) == "6x5x4x3x2x1=720");
}