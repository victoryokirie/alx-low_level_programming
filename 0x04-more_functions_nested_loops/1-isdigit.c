#include "main.h"
/**
* _isdigit - check if numbers are 0 to 9
* @c: param to be checked
* Return: 0 or 1 
*/

int _isdigit (int c)
{
	if (c >= 48 && c < 58)
		return (1);
	else
		return (0);
}
