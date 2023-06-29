#include "main.h"
/**
*reverse_array - reveres an aaray
*@n: number of elements of an array
*@a:pointr to array
*
* Return:void
*/
void reverse_array(int *a, int n)
{
	int start = 0;

	int end = n - 1;

	int temp;

	while (start < end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
}
