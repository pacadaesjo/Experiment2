#include <iostream>
#include <conio.h>

using namespace std;

int main()
{


	int gallons;
	double unpaid, Famount;

	cout << "Please indicate the amount of your unpaid balance from the previous month if there are any, otherwise type '0':" << endl;
	cin >> unpaid;

	cout << "Please input the amount of gallons you consumed for this billing cycle:" << endl;
	cin >> gallons;

	if (unpaid > 0)
	{

		Famount = 35 + (gallons * 1.10) + unpaid + 25;
		cout << "\nYour total water bill for this cycle is P" << Famount << endl;
	}
	else
	{

		Famount = 35 + (gallons * 1.10);
		cout << "\nYour total water bill for this cycle is P" << Famount << endl;
	}
	_getch ();
	return 0;
}

