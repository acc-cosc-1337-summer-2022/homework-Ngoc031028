//write include statements
#include <string>
#include <iostream>
#include "decisions.h"

using namespace std;
using std::string;

int main() 
{
	/*
	Uses cin to capture
    letter_grade and credit_hours from the keyboard with a do-while loop.  In the loop, keep the
    sum of credit points and credit hours. The loop continues until the user opts out. Do the gpa
    calculation after the loop.
	*/
	string cont = "Y";
	double total_credit_points = 0;
	int total_credit_hours = 0;
	double gpa;
	
	do 
	{
		string letter_grade;		
		double credit_point;
		double grade_point;
		int credit_hour;

		cout<<"Letter grade: ";
		cin>>letter_grade;

		grade_point = get_grade_points(letter_grade);		
		
		cout<<"Credit hour: ";
		cin>>credit_hour;
		total_credit_hours += credit_hour;

		credit_point = grade_point*credit_hour;
		total_credit_points += credit_point;		
		
		cout<<"Continue? ";
		cin>>cont;
	}
	while (cont == "Y" || cont == "y");

	//cout<<"Total credit hours: "<<total_credit_hours<<"\n";
	//cout<<"Total credit points: "<<total_credit_points<<"\n";
	
	if (total_credit_hours != 0){
		gpa = calculate_gpa(total_credit_hours, total_credit_points);
		cout<<"The GPA is: "<<gpa<<"\n";
	}
	else
		cout<<"Total credit hours can not be zero! \n";	

	return 0;
}