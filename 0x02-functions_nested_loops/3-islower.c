#include "main.h"
/**
* _islower - checks if a charactec is lowercase and returns 1 if yes
* it returns 0 just like islower() in ctype.h
* @c: this is the int value to be compared with ASCII value
* Return: 0 if successful
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
