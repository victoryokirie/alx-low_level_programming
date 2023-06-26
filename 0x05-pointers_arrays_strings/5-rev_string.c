#include <stdio.h>
#include <string.h>
#include "main.h"
/**
*rev_string - function that prints string in reverse order
*/
void rev_string(char *s)
{
	int length = strlen(s);

	int i = (length - 1);

	char temp;

	while (i >= 0)
	{
		temp += s[i];
		i--;
	}
}
