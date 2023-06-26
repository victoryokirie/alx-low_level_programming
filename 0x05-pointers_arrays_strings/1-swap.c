#include <stdio.h>
#include "main.h"
/**
*swap_int - function that swaps the value of two integers
*@a : first integer deference operator
*@b : second integer deference operator
*int temp: used to assign the value of a
*Author: VO
*Return: 0 (success)
*/
void swap_int(int *a, int *b)
{
	int temp;	
	temp = *a;
	*a = *b;
	*b = temp;
}
