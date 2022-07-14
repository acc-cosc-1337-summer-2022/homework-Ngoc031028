//write include statements
#include<iostream>
#include "hwexpressions.h"

//write namespace using std
using namespace std;

int main()
{

     // Create double variables named meal_amount, tip_rate, tip_amount, tax_amount, and total.
     double meal_amount;
     double tip_rate;
     double tip_amount;
     double tax_amount;
     double total;

     //Use the cin object to capture the number from the keyboard, assign the number to meal_amount.
     cout<<"Enter the meal amount: ";
     cin>>meal_amount;
	
     //Call the get_sales_tax_amount with meal_amount as its parameter
     //assign the return value of the function get_sales_tax_amount to the tax_amount variable. 
     tax_amount = get_sales_tax_amount(meal_amount);

     //Capture the tip rate from keyboard and assign the value to tip_rate variable.
     cout<<"Enter the tip rate: "; cin>>tip_rate;

     //Call the function get_tip_amount with meal_amount and tip_rate as its parameters, 
     //set function get_tip_amount return value to tip_amount.
     tip_amount = get_tip_amount(meal_amount, tip_rate);

     //Add tip_amount, tax_amount and meal_amount , and save result to total variable.
     total = meal_amount + tip_amount + tax_amount;
     
     /*
     Display a receipt (formatting the number decimal spaces is optional): 
          Meal Amount:           20
          Sales Tax:              1.35       
          Tip Amount:            3
          Total:                    24.35
     */
     cout<<"------------------------------------- \n";
     cout<<"              Receipt \n";
     cout<<"Meal Amount:           "<<meal_amount <<"\n";
     cout<<"Sales Tax:             "<<tax_amount<<"\n";
     cout<<"Tip Amount:            "<<tip_amount<<"\n";
     cout<<"Total:                 "<<total<<"\n";
     cout<<"------------------------------------- \n";	

     return 0;
}
