#include <iostream>
#include <conio.h>
#include <cmath>
#include <iomanip> 


using namespace std;

int main()
{
	int x, y;
	double v;
	const double z = 2.5;

	cout << "Input x value: ";
	cin >> x;
	cout << "Input y value: ";
	cin >> y;
	switch (x)
	{
	case 1:
		if (1 < y && y < 5)
		{
			v = 1 * y * z;

		}
		else if (y >= 5)
		{
			v = 1 + (y / z);
		}
		else
			v = 1 + y + z;
		break;

	case 2:
		if (y <= 5)
		{
			v = fabs((2 - y) / z);

		}
		else if (y > 5)
		{
			v = 2 - sqrt(y + z);
		}
		else
			v = 2 + y + z;
		break;

	default:
		v = x + y + z;

	}

	cout << endl << "The computed value for V is " << fixed << setprecision(2) << setw(10) << endl << v;
	_getch();

	return 0;
}