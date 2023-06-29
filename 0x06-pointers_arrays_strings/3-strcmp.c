#include "main.h"
/**
*_strcmp - function compares two strings
*@s1: pointer to first string
*@s2: pointer to second string
*Return: an integer less than, equal to or greater than zero
*if s1 is less than, to match or be greater than s2 respectively.
*/
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}
