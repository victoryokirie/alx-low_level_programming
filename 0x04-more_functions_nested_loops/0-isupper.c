#include "main.h"
/**
* _isupper - checks if the character is uppercase and if Yes, it returns 1
* Otherwise, it returns 0
* @c: int value to the compared with the ASCII value
* Return: 0 if successful
*/
int _isupper(int c)
{
	if (c >= 65 && c < 91)
		return (1);
	else
		return (0);
}
