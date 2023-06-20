#include "main.h"
/**
* _islower - to check if a character is lower case or not
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
	
