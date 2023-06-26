#include <stdio.h>
#include "main.h"
#include <string.h>
/**
* puts_half - function tht pritns second half of a string
* @str : string to be split in two
* @length : str length
* @start : midpoint
*/
void puts_half(char *str)
{
	int length = strlen(str);
	int start;

	if (length % 2 != 0)
		length = length - 1;
	start = length / 2;
	while (start < length)
	{
		putchar(str[start]);
		start++;
	}
	putchar('\n');
}
