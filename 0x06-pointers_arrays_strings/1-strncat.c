#include "main.h"

/**
*_strncat - function concatenates two strings. it will use at most 
*	    n bytes from src
*	    src does not need to be null-terminated if it contains n or more bytes
*@src: pointer to source string
*@dest: pointer to destination string
*@n: number of bytes to be concatenated
*
*Return: pointer to destination string
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	for (j = 0; j < n && src[j] != '\0'; j++,i++)
		dest[i] = src[j];
	dest[i] = '\0';
	return (dest);
}
