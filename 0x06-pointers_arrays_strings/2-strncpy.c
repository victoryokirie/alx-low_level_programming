#include "main.h"
/**
*_strncpy - copies string
*@src: source string pointer
*@dest: pointer to dest string
*@n: given value
*Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
