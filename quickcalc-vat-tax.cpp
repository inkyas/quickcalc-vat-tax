#include <iostream>
#include <iomanip>

int main()
{
	// ask the user for the price 
	std::cout << "Enter the BEFORE VAT/Tax price, e.g. 29.99: \n\n   \x9C" ;
	
	// read the user input in to a variable
	double price ;
	std::cin >> price ;
	
	// ask user for VAT/tax rate
	std::cout << "\n\nEnter the VAT/Tax rate as a percentage, e.g. 20 or 17.5:  \n\n   %" ;
	
	// read the user input in to another variable
	double percent_tax ;
	std::cin >> percent_tax ;
	
	// check and if the  price and  tax are positive values
	if( price > 0 && percent_tax > 0 )
	{
		// compute  tax amount
		const double tax_amount = price * percent_tax / 100.0 ;
		
		// calculate total amount
		const double gross_amount = price + tax_amount ;
		
		// display on screen the tax amount for price and the total.
		std::cout << std::fixed // fixed point format
				  << std::setprecision(2) // with two digits after the decimal point
				  << "\n\n Before VAT/Tax price:        " << price << '\n'
				  << " Add " << percent_tax << "% VAT/Tax, amount:  \x9C" << tax_amount << '\n'
				  << "============================================================" << '\n'
				  << " Total including VAT/Tax:     \x9C" << gross_amount << '\n'
				  << "============================================================" ;
	}
	
	else std::cout << "There appears to be an error in your input.\n" ; // invalid input
}
