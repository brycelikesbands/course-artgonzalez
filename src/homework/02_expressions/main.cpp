//write include statements
#include <iostream>
#include "hwexpressions.h"
//write namespace using statement for cout
using std::cout;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	double meal_amount, tip_rate, tip_amount, tax_amount, total;

    
    std::cout << "Enter the meal amount: ";
    std::cin >> meal_amount;

    
    tax_amount = get_sales_tax_amount(meal_amount);

    
    std::cout << "Enter the tip rate (%): ";
    std::cin >> tip_rate;

    
    tip_amount = get_tip_amount(meal_amount, tip_rate);

    
    total = meal_amount + tax_amount + tip_amount;

    
    std::cout << "Meal Amount:     $" << meal_amount << std::endl;
    std::cout << "Sales Tax:         $" << tax_amount << std::endl;
    std::cout << "Tip Amount:       $" << tip_amount << std::endl;
    std::cout << "Total:               $" << total << std::endl;

	return 0;
}
//done