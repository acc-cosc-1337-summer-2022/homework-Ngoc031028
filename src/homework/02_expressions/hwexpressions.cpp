#include "expressions.h"

//example
int add_numbers(int num1, int num2)
{
	return num1 + num2;
}

//write function code here

//Declare a const double tax_rate variable with value 6.75
const double tax_rate = 6.75;
//example
int add_numbers(int num1, int num2)
{
	return num1 + num2;
}

//write function code here

//multiply tax_rate and meal_amount and return their product
double get_sales_tax_amount(double meal_amount){
	return meal_amount*tax_rate/100;
}

//multiply meal_amount and tip_rate, return their product.
double get_tip_amount(double meal_amount, double tip_rate){
	return meal_amount*tip_rate/100;
}


