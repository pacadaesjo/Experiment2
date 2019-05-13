#include <iostream>
#include <conio.h>
using namespace std;

int main()
{

	bool habadu = false;
	do
	{
		int n, s = 0;
		cout << "Enter a number: ";
		cin >> n;
		if (n > 0)
		{
			for
				(int i = 1; i <= n; ++i)
			{
				s = s + i;
			}

			cout << "The sum of all whole numbers from 1 to" << " " << n << " " << "is: " << s << endl;

		}
		else
		{
			cout << "Thank you!";
			break;
		}

	} while (!habadu);

	_getch();
	return 0;

}
