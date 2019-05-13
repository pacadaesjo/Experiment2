#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	char a;
	cout << "Please select what package deal you want to acquire. \n Press A, if you want Package A. \n Press B, if you want Package B. \n Press C, if you want Package C" << endl;
	cin >> a;
	switch (a)

	{
		double hoursA, hoursB, hoursC;

	case 'a':
	case 'A':
		cout << "Package A: For P995/mo 10 hrs of access is provided. Additional hours are P20/hr. \n Please enter the total hours you consumed to calculate your total bill for this month:" << endl;
		cin >> hoursA;
		if (hoursA <= 10)
			cout << "Your total bill for this month is $995";
		else if (hoursA > 10)
			cout << "Your total bill for this month is $" << 995 + (hoursA - 10) * 20 << endl;
		break;

	case 'b':
	case 'B':
		cout << "Package B: For P1495/mo 20 hrs of access is provided. Additional hours are P10/hr. \n Please enter the total hours you consumed to calculate your total bill for this month:" << endl;
		cin >> hoursB;
		if (hoursB <= 20)
			cout << "Your total bill for this month is $1495";
		else if (hoursB > 20)
			cout << "Your total bill for this month is $" << 1495 + (hoursB - 20) * 10 << endl;
		break;

	case 'c':
	case 'C':
		cout << "Package C: For P1995/mo of unlimited acces is provided. \n Please enter the total hours you consumed to calculate your total bill for this month:" << endl;
		cin >> hoursC;
		cout << "Your total bill for this month is $ 1995" << endl;
		break;

	default:
		cout << "Invalid input";
	}
	_getch();
	return 0;
}