#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "hwexpressions.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify sum_numbers function") 
{
	REQUIRE(add_numbers(5, 5) == 10);
	REQUIRE(add_numbers(10, 10) == 20);
}

TEST_CASE("Test Get Sales Tax") {
    // Verify the sales tax amount for a meal amount of 10
    double expected_sales_tax_1 = 0.675;
    double actual_sales_tax_1 = get_sales_tax_amount(10);
    REQUIRE(actual_sales_tax_1 == expected_sales_tax_1);

    // Verify the sales tax amount for a meal amount of 20
    double expected_sales_tax_2 = 1.35;
    double actual_sales_tax_2 = get_sales_tax_amount(20);
    REQUIRE(actual_sales_tax_2 == expected_sales_tax_2);
}

TEST_CASE("Test Get Tip Amount") {
    // Verify the tip amount for a meal amount of 20 and tip rate of 15%
    double expected_tip_amount_1 = 3;
    double actual_tip_amount_1 = get_tip_amount(20, 15);
    REQUIRE(actual_tip_amount_1 == expected_tip_amount_1);

    //  Verify the tip amount for a meal amount of 20 and tip rate of 20%
    double expected_tip_amount_2 = 4;
    double actual_tip_amount_2 = get_tip_amount(20, 20);
    REQUIRE(actual_tip_amount_2 == expected_tip_amount_2);
}
//done