#include <stdio.h>
#include "main.h"
#include <string.h>
/**
*_strcat - function that concats two strings
*@src : pointer to source string
*@dest: pointer to destination string
* Return: pointer to dest string
*/
char *_strcat(char *dest, char *src)
{
	int lenS = 0;
	
	int lenD = 0;
	
	while (dest[lenD] != '\0')
		lenD++;
	for (lenS = 0; src[lenS] != '\0'; lenS++, lenD++)
	{
		dest[lenD] = src[lenS];
	}
	dest[lenD] ='\0';
	return (dest);
}
