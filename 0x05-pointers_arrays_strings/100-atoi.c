#include <stdio.h>
#include "main.h"
/**
* _atoi - converts string to integer
*Return: integer
*@s: pointer parameter
*/
int _atoi(char *s)
{
	int sign = 1;

	int result = 0;

	while (*s != '\0')
	{
		if (*s >= '0' && *s <= '9')
		{
			int digit = *s - '0';
			
			result = (result * 10) + digit;
		}
		else if (*s == '-' && *(s + 1) >= '0' && *(s + 1) <= '9')
			sign = -1;
		else if (*s == '+' && *(s + 1) >= '0' && *(s + 1) <= '9')
			sign = 1;
		else if (result != 0)
			break;
		s++;
	}
	return (sign * result);
	/*while (*s == ' ')
		s++;
	if (*s == '-' || *s == '+')
	{
		sign = (*s == '-') ? -1 : 1;
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		int digit = *s - '0';

		integer = (integer * 10) + digit;
		s++;
	}
	integer = integer * sign;
	if (integer == 0 && *s != '0')
		return (0);
	return (integer);*/
}
