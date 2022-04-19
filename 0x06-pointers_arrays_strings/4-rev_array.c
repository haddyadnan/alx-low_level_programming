#include "main.h"
#include <stdio.h>
/**
 * reverse_array - Reverse array
 *
 * @a: array
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{
	int i;
	int hol;

	for (i = 0; i < n--; i++)
	{
		hol = a[i];
		a[i] = a[n];
		a[n] = hol;
	}
}
