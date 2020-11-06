#include <iostream>

int cirkel()
{
	double pi = 3.14159;
	double resultCirkel, resultCirkel2;
	double Radius;
	double diameter;
	std::cout << "please type the Radius of the cirkel: " << std::endl;
	std::cin >> Radius;
	resultCirkel = Radius * Radius * pi;
	resultCirkel2 = Radius * pi * 2;
	diameter = Radius * 2;
	std::cout << "Diameteren af cirklen er: " << std::endl;
	std::cout << diameter << std::endl;
	std::cout << "Arealet af cirkel er: " << std::endl;
	std::cout << resultCirkel << std::endl;
	std::cout << "omkredsen af cirkel er: " << std::endl;
	std::cout << resultCirkel2 << std::endl;
	return 0;
}