//write include statements
#include <string>
#include <iostream>
#include "decisions.h"

using namespace std;
using std::string;

int main() 
{
	/*
	.  In the loop, keep the
    sum of credit points and credit hours. The loop continues until the user opts out. Do the gpa
    calculation after the loop.
	*/
	string cont = "Y";
	double total_credit_points = 0;
	int total_credit_hours = 0;
	double gpa;
	

	//Use do-while loop to capture letter grades and credits hours from the keyboard
	do 
	{
		string letter_grade;		
		double credit_point;
		double grade_point;
		int credit_hour;
	

		cout<<"Letter grade: ";
		cin>>letter_grade;

		//call the function get_grade_points to convert a  letter grade to a number grade 
		grade_point = get_grade_points(letter_grade);

		// request to re-eneter if enter an inappropriate letter grade
		while (grade_point == -1){			
			cout<<"Leter grade must be A, B, C, D or F! Please re-enter. \n";
			cout<<"Letter grade: ";
			cin>>letter_grade;
			grade_point = get_grade_points(letter_grade);			
		}		
		
		cout<<"Credit hour: ";
		cin>>credit_hour;

		//calculate the total number of credit hours
		total_credit_hours += credit_hour;

		credit_point = grade_point*credit_hour;

		//Calculate  the total number of credit ponis 
		total_credit_points += credit_point;		
		
		//ask if continue to enter another letter grade
		cout<<"Continue? ";
		cin>>cont;
		} while (cont == "Y" || cont == "y");

	//check not divide by 0
	if (total_credit_hours != 0){
		gpa = calculate_gpa(total_credit_hours, total_credit_points);
		cout<<"The GPA is: "<<gpa<<"\n";
	}
	else
		cout<<"Total credit hours can not be zero! \n";	

	return 0;
}