#include "main.h"
/**
* _isdigit - Returns 1 if a character is digit, otherwise returns 0
* @c: int value compared with ASCII value
* Return: 0 or 1 
*/
int _isdigit (int c)
{
	if (c >= 48 && c < 58)
		 return (1);
	else
		return (0);
}
