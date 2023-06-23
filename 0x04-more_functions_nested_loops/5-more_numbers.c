#include "main.h"
/**
*more_numbers - print 0 - 14 ten times
*/
void more_numbers(void)
{
	int a, b;

	a = 0;
	while (a < 10)
	{
		for (b=0; b <= 14; b++)
		{
			if (b >= 10)
			{
				_putchar((b / 10) + 48);
			}
			_putchar((b % 10) + 48);
		}
		_putchar('\n');
		a++;
	}
}
