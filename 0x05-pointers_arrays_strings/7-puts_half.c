#include <stdio.h>
#include "main.h"
#include <string.h>
/**
* puts_half - prints half of string
* @str : string to be split in two
*/
void puts_half(char *str)
{
	int length = strlen(str);
	int i;

	if (length % 2 == 1)
		i = (length - 1) / 2;
	else
		i = length / 2;
	while (i < length)
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
