// write include statements
#include <iostream>
#include <string>
#include "dna.h"

// write using statements
using namespace std;

/*
Write code that prompts user to enter 1 for Get GC Content,
or 2 for Get DNA Complement.  The program will prompt user for a
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as
user enters a y or Y.
*/
int main()
{
	string cont = "Y";
	int opt;
	string dna;

	while (cont == "Y" || cont == "y")
	{
		do
		{
			
			cout << "\n";
			cout << "1) Get GC Content \n";
			cout << "2) Get DNA Complement \n\n";
			cout << "Select an option: ";
			cin >> opt;

			if (opt != 1 && opt != 2)
				cout << "Invalid option! It must be 1 or 2, please re-enter.\n";
		} while (opt != 1 && opt != 2);

		cout << "\nEnter a DNA string: ";
		cin >> dna;
		
		if (opt == 1)
		{
			cout << "\nThe GC Content is: " << get_gc_content(dna) << "\n";
		}
		else
		{
			cout << "\nThe DNA complement is: " << get_dna_complement(dna) << "\n";
		}

		cout << "Do you want to continue? ";
		cin >> cont;
	}

	return 0;
}