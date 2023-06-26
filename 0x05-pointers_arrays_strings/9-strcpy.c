#include "main.h"
#include <stdio.h>
/**
* _strcpy - copies a string pointed to src and dest
*@src: pointer param
*@dest: pointer param
*Return: pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		dest[i] = *(src + i);
	}
	dest[i] = '\0';

	return (dest);
}
