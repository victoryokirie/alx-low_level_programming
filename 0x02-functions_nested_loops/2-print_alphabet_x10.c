#include "main.h"
/**
*  print_alphabet_x10 - Entry point
*
* return: 0(success)
*/
void print_alphabet_x10(void)
{
	int times = 1;

	while (times <= 10)
	{
		char c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		times++;
	}
}

