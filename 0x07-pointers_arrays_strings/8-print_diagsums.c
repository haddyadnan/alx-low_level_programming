#include "main.h"
#include <stdio.h>

/**
 * print_diagsums  - print sum of diags
 *
 * @a: matrix
 * @size: size
 */

void print_diagsums(int *a, int size)
{
	int i;
	int rsmall = 0, rbig = 0;
	int n = size * size;

	for (i = 0; i < n; i += size + 1)
	{
		rsmall += a[i];
	}

	for (i = size - 1; i < n - 1; i += size - 1)
	{
		rbig += a[i];
	}

	printf("%d, %d\n", rsmall, rbig);
}
