#include "main.h"
/**
*string_toupper - function that changes lowercase letters to uppercase
*@str: pointer to string
*
*Return: pointer to the modified string
*/
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 97 && *ptr <= 122)
		{
			*ptr = *ptr - 32;
		}
		ptr++;
	}
	return (str);
}
