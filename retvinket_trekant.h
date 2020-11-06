#include <iostream>
#include <math.h>



int triangle()
{
	int Chiose_triangle;
	int Chiose_pytagoros = 0;

	std::cout << "What do you need help with?\n";
	std::cout << "1 - Pytagoros\n";
	std::cout << "2 - Areal or Omkreds\n";
	std::cout << "Please enter your choise:";
	std::cin >> Chiose_triangle;

	switch (Chiose_triangle)
	{
	case 1:
	{
		int pytagoros_side_choise;
		double a, b, c;
		std::cout << "What side of the triangle do you need to solve Pytagoros thome?\n";
		std::cout << "1 - a\n";
		std::cout << "2 - b\n";
		std::cout << "3 - c\n";
		std::cout << "plase enter your choise: ";
		std::cin >> pytagoros_side_choise;

		switch (pytagoros_side_choise)
		{
		case 1:
		{
			std::cout << "please enter b: ";
			std::cin >> b;
			std::cout << "plase enter c: ";
			std::cin >> c;
			a = sqrt(c * c - b * b);
			std::cout << "the value of a is: " << a << std::endl;

			break;
		}
		case 2:
		{
			std::cout << "please enter a: ";
			std::cin >> a;
			std::cout << "plase enter c: ";
			std::cin >> c;
			b = sqrt(c * c - a * a);
			std::cout << "the value of b is: " << b << std::endl;

			break;
		}
		case 3:
		{
			std::cout << "please enter a: ";
			std::cin >> a;
			std::cout << "please enter b: ";
			std::cin >> b;
			c = a * a + b * b;
			c = sqrt(c);
			std::cout << "the value of c is: " << c << std::endl;

			break;
		}

		default:
			std::cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!\n";
			std::cout << "Not a Valid Choice. \n";
			std::cout << "Choose again.\n";
			std::cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!\n";
			std::cin >> pytagoros_side_choise;
			break;
		}
	case 2:
	{
		int omkreds_areal;
		std::cout << "what do you need help with?\n";
		std::cout << "1- area\n";
		std::cout << "2- circumference\n";
		std::cout << "plase enter your choise: ";
		std::cin >> omkreds_areal;

		switch (omkreds_areal)
		{
		case 1:
			double High, Baseline, H_B_result;
			std::cout << "please enter the base of the triangle: ";
			std::cin >> Baseline;
			std::cout << "please enter the high of the triangle: ";
			std::cin >> High;
			H_B_result = (0.5) * Baseline * High;

			std::cout << "The area of the triangle is: " << H_B_result << std::endl;
			break;
		case 2:
			double a, b, c, abc_result;
			std::cout << "Please enter the value of a: ";
			std::cin >> a;
			std::cout << "Please enter the value of b: ";
			std::cin >> b;
			std::cout << "Please enter the value of c: ";
			std::cin >> c;
			abc_result = a + b + c;
			std::cout << "The circumference of the triangle is: " << abc_result << std::endl;
			break;
		default:
			std::cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!\n";
			std::cout << "Not a Valid Choice. \n";
			std::cout << "Choose again.\n";
			std::cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!\n";
			std::cin >> omkreds_areal;
			break;

		}

	}

	}

	}

	return 0;
}
