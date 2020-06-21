// lavet af Johannes
// Program: matematiske udøvning af ligninger
#include <iostream>
#include <iomanip>
#include <limits>
#include "Pytagoros.h"
using namespace std;


int main()
{
	/*declaring variabels*/
	int FirstValue;
	int SecoundValue;
	int numberProduct, numberSum, numberMinus;
	double numberDivision;

	/*indput fra bruger*/
	cout << "føste tal" << endl;
	cin >> FirstValue;
	cout << "andet tal" << endl;
	cin >> SecoundValue;
	/*Udøvning af matematiske ligninger*/
	numberProduct = FirstValue * SecoundValue;
	numberSum = FirstValue + SecoundValue;
	numberMinus = FirstValue - SecoundValue;
	numberDivision = static_cast<double>(FirstValue) / SecoundValue;
	/*Output af fundet data*/
	cout << "the product is: " << numberProduct << endl;
	cout << "the sum is: " << numberSum << endl;
	cout << "the minus is: " << numberMinus << endl;
	cout << "the division is: " << numberDivision << endl;
	pytagoros();
	cin.get();
}