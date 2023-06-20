#include "main.h"
/**
* _isalpha - returns 1 if c is a letter, lowercase or uppercase
* @c: int value to be compared with ASCII value
*
* Return 1 if alpba else return 0
*/
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}
