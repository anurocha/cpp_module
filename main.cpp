
#include <iostream>
import converter;
int main()
{
	int year;
	std::cout << "Enter Year : ";
	std::cin >> year; 

	int bc = CtoB(year);
	std::cout << "Thai year is " << bc << std::endl;
	return 0;
}