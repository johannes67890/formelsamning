#include <iostream>
#include <math.h>
int Ligning()
{
	int LigningSwitch; //switch variable
	std::cout << "1 - Hældningskoefficient" << std::endl;
	std::cout << "2 - skæringspunktet" << std::endl; 
	std::cout << "3- 2. gradsligning" << std::endl;
	std::cin >> LigningSwitch;
	

		switch (LigningSwitch)
		{
		case 1: //Hældningskoefficient
		{
			int x1, x2, y1, y2, a;
			std::cout << "Please enter the cordinets of the first point\n" << std::endl;
			std::cout << "x1:" << std::endl;
			std::cin >> x1;
			std::cout << "y1:" << std::endl;
			std::cin >> y1; 
			std::cout << "Please enter the cordinets of the secound point\n" << std::endl;
			std::cout << "x2:" << std::endl;
			std::cin >> x2;
			std::cout << "y2:" << std::endl;
			std::cin >> y2;

			a = y2 - y1 / x2 - x1;
			std::cout << "Hældningskoefficient (stigningstalet) er: " << a << std::endl;
			break;
		}
		case 2: //skæringspunktet IKKE FÆRDIG
			int a1, b1, a2, b2, x;
			//LAYOUT
			std::cout << "##############################" << std::endl;
			std::cout << "# Insert the following input #" << std::endl;
			std::cout << "#   of the first equation    #" << std::endl;
			std::cout << "#	   y = ax + b        #" << std::endl;
			std::cout << "# -------------------------- #" << std::endl;
			std::cout << "# a = ", std::cin >> a1;
			std::cout << "# b = ", std::cin >> b1; 
			std::cout << "#----------------------------#" << std::endl;
			std::cout << "# Insert the following input #" << std::endl;
			std::cout << "#   of the second equation   #" << std::endl;
			std::cout << "#	   y = ax + b        #" << std::endl;
			std::cout << "# -------------------------- #" << std::endl;
			std::cout << "# a = ", std::cin >> a2;
			std::cout << "# b = ", std::cin >> b2;
			//LAYOUT done


			

			break;

		case 3: //2. gradsligning
			int a, b, c;
			std::cout << "you have entered *2. gradsligning" << std::endl;
			std::cout << "please enter the value of a:"; //step 1.
				std::cin >> a;
				std::cout << "please enter the value of b:";
				std::cin >> b;
			std::cout << "please enter the value of c:";
				std::cin >> c;
			//step 2. find the diskriminanten
				int d;
				d = pow(b, 2) - 4 * a * c;
				std::cout << d << std::endl;
				int dX1, dX2; 
					dX1 = (-b + sqrt(d)) / (2 * a); //udregning af 2. gradsligning
					dX2 = (-b - sqrt(d)) / (2 * a);
					if (dX1 == dX2) // hvis x1 og x2 er det samme er x = 0
					{
						int dX0 = 0;
						std::cout << "The value of x is: " << dX0 << std::endl;
						std::cout << "be aware the value is the same at x1 and x2, because d = 0" << std::endl;
					}
					else // ellers print beregnet værdier
					{
						std::cout << "the value of x1 is: " << dX1 << "and the value of x2 is: " << dX2 << std::endl;
					}

				break;
		default:
			std::cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!\n";
			std::cout << "Not a Valid Choice. \n";
			std::cout << "Choose again.\n";
			std::cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!\n";
			std::cin >> LigningSwitch;
			break;
			
		}
		return 0;
}