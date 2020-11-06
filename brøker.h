#include <iostream>

int brøk()
{
	int brøk_choice;
	std::cout << "1 - add two fractions\n" << std::endl;
	std::cout << "2 - takeaway two fractions\n" << std::endl;
	std::cout << "Please enter your choise\n" << std::endl;
	std::cin >> brøk_choice;
	switch (brøk_choice)
	{

	case 1:
		//add tow fractions together
		int a1, b1, a2, b2;

		std::cout << "please enter the numerator and the denominator of the first fraction\n";
		std::cin >> a1;
		std::cout << "/\n";
		std::cin >> b1;
		std::cout << "plase enter the numeator and the demonaitor of the secound fraction\n";
		std::cin >> a2;
		std::cout << "/\n";
		std::cin >> b2;

		int F1, F2, Plus_result;
		int Com_demo = 0;

		if (b1 == b2)
		{
			int F_math;
			F_math = a1 + a1;

			std::cout << "the result is: " << F_math << "/" << b1 << std::endl;


		}
		else
		{
			//something worng
			Com_demo = b1 * b2;

			F1 = a1 * b2; // maybe here?
			F2 = b1 * a2; // or here?

			Plus_result = F1 + F2;
			std::cout << "The result is: " << Plus_result << "/" << Com_demo << std::endl; //what is going on here with Com_demo??
		}
		int Shorten_1;
		std::cout << "do you wish to shorten the fraction?\n";
		std::cout << "1 - Yes\n";
		std::cout << "2 - No\n";
		std::cin >> Shorten_1;
		switch (Shorten_1)
		{
		case 1:
			if (Plus_result = 2, 4, 6, 8, 10, 12, 14, 16, 18, Com_demo = 2, 4, 6, 8, 10, 12, 14, 16, 18)
			{
				Plus_result / 2;
				Com_demo / 2;
			}
			else if (Plus_result = 3, 5, 7, 9, 11, 13, 15, 17, 19, Com_demo = 3, 5, 7, 9, 11, 13, 15, 16, 18)
			{
				Plus_result / 3;
				Com_demo / 3;
			}
			std::cout << Plus_result << "/" << Com_demo << std::endl;
			break;
		case 2:
			break;
		default:
			std::cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!\n";
			std::cout << "Not a Valid Choice. \n";
			std::cout << "Choose again.\n";
			std::cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!\n";
			std::cin >> Shorten_1;
			break;
		}

		//case 2:





		//default:
			//break;
	}

	return 0;

}