#include <stdio.h>
/**
* _atoi - converts string to integer
*Return: integer
*@integer: final result
*/
int _atoi(char *s)
{
	int sign = 1;/*variable to sign sign of number*/

	int integer = 0;/*variable to store the final string*/

	/*handling white spaces*/
	while (*s == ' ')
		s++;
	/*handling the sign of a number*/
	if (*s == '-' || *s == '+')
	{
		sign = (*s == '-') ? -1 : 1;
		s++;
	}
/*	else if (*s == '+')
	{
		s++;
	}*/
	/*convert the string to integer*/
	while (*s >= '0' && *s <= '9')
	{
		/*convert the string to the equating  integer*/
		int digit = *s - '0';
		/*unit tens hundreds thousands*/
		integer = (integer * 10) + digit;
		s++;
	}
	/*applying the sign*/
	integer = integer * sign;
	if (integer == 0 && *s != '0')
		return (0);
	/*return final result*/
	return integer;
}
