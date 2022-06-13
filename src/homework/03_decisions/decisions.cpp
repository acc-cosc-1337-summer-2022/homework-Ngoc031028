//write include statement for decisions header
#include <string>
#include "decisions.h"

//Write code for function(s) code here

//accepts a string (letter_grade) and returns the grade points.
int get_grade_points(std::string letter_grade)
{
  if (letter_grade == "A") 
    return 4;
   
  else if (letter_grade == "B")
    return 3;
  
  else if (letter_grade == "C")
    return 2;
  
  else if (letter_grade == "D")
    return 1;
  
  else if (letter_grade == "F")
    return 0;
  
  else 
    return -1;        
    
}

double calculate_gpa(int  credit_hours, double credit_points)
{
    return credit_points/credit_hours;
}

