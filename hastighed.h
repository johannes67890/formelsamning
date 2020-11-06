#include <iostream>

int MeterMinutter()
{
	double Meter;
	double Minutter;
	double Sekunder;
	int choiceSpeed;
	double MeterTilKilometer_omreging;
	double MinutterTilTimer_omreging;
	double Meteriminutter_Resultat;
	double MeterIsekundt_resultat;

	std::cout << "please enter the dictiance in meters: " << std::endl;
	std::cin >> Meter;
	std::cout << "Please enter the type of mechurement you want to use for the time.\n " << std::endl;
	std::cout << "--> Please enter 1 for intering in minutter\n " << std::endl;
	std::cout << "--> Please enter 2 for intering in sekunder\n " << std::endl;
	std::cin >> choiceSpeed;

	switch (choiceSpeed)
	{
	case 1:
		std::cout << "you have ented 1 for minutter, please enter youre value: ";
		std::cin >> Minutter;
		MeterTilKilometer_omreging = Meter / 1000;
		MinutterTilTimer_omreging = Minutter / 60;
		Meteriminutter_Resultat = MeterTilKilometer_omreging / MinutterTilTimer_omreging;
		std::cout << "Hastigheden i km/t er: " << Meteriminutter_Resultat << std::endl;
		break;
	case 2:
		std::cout << "you have ented 2 for sekunder, please enter youre value: ";
		std::cin >> Sekunder;
		MeterIsekundt_resultat = Meter / Sekunder;
		std::cout << "Hastigheden i meter pr. sekund er: " << MeterIsekundt_resultat << std::endl;
		break;
	default:
		std::cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!\n";
		std::cout << "Not a Valid Choice. \n";
		std::cout << "Choose again.\n";
		std::cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!\n";
		std::cin >> choiceSpeed;
		break;
	}

	return 0;

}
