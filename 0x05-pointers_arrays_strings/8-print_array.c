#include "main.h"
#include <stdio.h>
/**
*print_array - function to print arrays
*@a: array
*@n: number of elements to be printed
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != n)
			printf(", ");
	}
	printf("\n");
}
