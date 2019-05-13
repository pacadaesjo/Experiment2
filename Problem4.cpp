#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int one = 1;
	while (one != 30)
	{
		cout << one << ",";
		if (one < 10)
		{
			one = one + 1;
		}
		else
		{
			one = one + 2;
		}

	}

	cout << one;
	_getch();
	return 0;
}
