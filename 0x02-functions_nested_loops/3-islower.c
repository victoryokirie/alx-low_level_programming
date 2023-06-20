#include "main.h"
/**
* _islower - to check if a character is lowercase and returns 1 if true
* return 0 if character is not lowercase
*@c - int value to be compared with ASCII value
*
* return: 0 (success)
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}	
