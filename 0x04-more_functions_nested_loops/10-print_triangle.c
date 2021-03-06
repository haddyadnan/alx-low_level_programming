#include "main.h"

/**
 * print_triangle - print a triangle followed by new line
 * @size: size of the triangle
 *
 */

void print_triangle(int size)
{
	int count, i, j;

	count = 0;
	i = size - 1;
	while (count < size)
	{
		i = size - 1 - count;
		j = count + 1;
		while (i > 0)
		{
			_putchar(' ');
			i--;
		}
		while (j > 0)
		{
			_putchar('#');
			j--;
		}
		_putchar('\n');
		count++;
	}

	if (size < 1)
		_putchar('\n');
}
