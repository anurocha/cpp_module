
#include <iostream>
import converter;
int main()
{
	converterUtil::converter convt;

	int year;
	std::cout << "Enter Year : ";
	std::cin >> year; 

	std::cout << "Thai year is " << convt.CtoB(year) << std::endl;

	int cel;
	std::cout << "Enter Temp in Celsius : ";
	std::cin >> cel; 
	std::cout << "Temp in Fahrenheit is " << convt.CelsiusToFahrenheit(cel) << std::endl;

	return 0;
}