#include <stdio.h>
#include "main.h"
#include <string.h>
/**
*print_rev - a function that prints a string in reverse order followed by a new line
*@s: set of string to be printed in reverse order
*@length : string length
*int i: string length decrementor
**/
void print_rev(char *s)
{
	int length = strlen(s);

	int i = (length - 1);
	
	while (i >= 0)
	{
		putchar(s[i]);
		i--;
	}
	putchar('\n');
}
