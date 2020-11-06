// lavet af Johannes
// Program: matematiske udøvning af ligninger
#include <iostream>
#include <iomanip>
#include <limits>
#include "retvinket_trekant.h"
#include "Cirkel.h"
#include "Hastighed.h"
#include "brøker.h"
#include "Ligninger.h"
using namespace std;




int main()
{

	/*declaring variabels*/
	int choice;
	bool ProgramOn = true;
	while (ProgramOn != false)
	{

		cout << "***********************************\n";
		cout << "1 - Plus, miuns, gange og dividere\n";
		cout << "2 - retvinket trekant\n";
		cout << "3 - cirkle\n";
		cout << "4 - Hastighed\n";
		cout << "5 - Brøker\n";
		cout << "6 - Ligninger\n";

		cout << "Please enter your choice: ";
		cin >> choice;

		switch (choice)
		{
			/* Case 1 execution of product, sum, minus and division */
		case 1:
			int FirstValue;
			int SecoundValue;
			int numberProduct, numberSum, numberMinus;
			double numberDivision;
			cout << "føste tal" << endl;
			cin >> FirstValue;
			cout << "andet tal" << endl;
			cin >> SecoundValue;
			numberProduct = FirstValue * SecoundValue;
			numberSum = FirstValue + SecoundValue;
			numberMinus = FirstValue - SecoundValue;
			numberDivision = static_cast<double>(FirstValue) / SecoundValue;
			cout << "the product is: " << numberProduct << endl;
			cout << "the sum is: " << numberSum << endl;
			cout << "the minus is: " << numberMinus << endl;
			cout << "the division is: " << numberDivision << endl;
			break;
			/*Case 2 execution of pytagoros theom*/
		case 2:
			cout << "********************************\n";
			cout << "Pytagoros\n" << endl;
			triangle();
			break;
			/*case 3 execution */
		case 3:
			cout << "********************************\n";
			cout << "cirkel\n" << endl;
			cirkel();
			break;
		case 4:
			cout << "********************************\n";
			cout << "Hastighed\n" << endl;
			MeterMinutter();
			break;
		case 5:
			cout << "********************************\n";
			cout << "brøk\n" << endl;
			brøk();
			break;
		case 6: 
			cout << "********************************\n";
			cout << "Ligninger\n" << endl;
			Ligning();
			break;
		default:
			cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!\n";
			cout << "Not a Valid Choice. \n";
			cout << "Choose again.\n";
			cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!\n";
			cin >> choice;
			break;
		}



	}
	cin.get();
}