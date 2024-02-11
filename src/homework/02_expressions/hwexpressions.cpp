#include "expressions.h"

//example
int add_numbers(int num1, int num2)
{
	return num1 + num2;
}

//write function code here

//declare tax_rate as constant variable
const double tax_rate = 6.75;

//get_sales_tax_amount
double get_sales_tax_amount(double meal_amount) {
    // Calculate the sales tax amount
    double sales_tax_amount = meal_amount * (tax_rate / 100.0);
    return sales_tax_amount;
}

//get_tip_amount
double get_tip_amount(double meal_amount, double tip_rate) {
    // Calculate the tip amount
    double tip_amount = meal_amount * (tip_rate / 100.0);
    return tip_amount;
}


