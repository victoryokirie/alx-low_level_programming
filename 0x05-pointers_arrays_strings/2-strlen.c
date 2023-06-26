#include <stdio.h>
#include "main.h"
/**
*_strlen - function to count the length of a string
*@s: string to be counted
*int i:string length counter
*Return: i (success)
*Author: VO
**/
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

