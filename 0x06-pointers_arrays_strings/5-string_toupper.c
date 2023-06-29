#include "main.h"
#include <ctype.h>
/**
*string_toupper - function that changes lowercase letters to uppercase
*@str: pointer to string
*
*Return: str
*/
char *string_toupper(char *str)
{
	while (*str != '\0')
	{
		*str = toupper(*str);
		str++;
	}
	return (str);
}
