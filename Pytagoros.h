#include <iostream>
#include <math.h>


int pytagoros()
{
	double FirstValue, SecoundValue, c;

	std::cout << "Please type the value of a: ";
	std::cin >> FirstValue;
	std::cout << "Please type the value of b: ";
	std::cin >> SecoundValue;

	c = FirstValue * FirstValue + SecoundValue * SecoundValue;
	c = sqrt(c);
	std::cout << "The hypotenus is: " << c << std::endl;
	return 0;
}