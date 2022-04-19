#include "main.h"

/**
 * reverse_array - Reverse array
 *
 * @a: array
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{
	int i;

	for (i = n; i <= 0; i--)
	{
		_putchar(a[i]);
	}
}
