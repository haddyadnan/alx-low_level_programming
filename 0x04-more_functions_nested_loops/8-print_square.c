#include "main.h"

/**
 * print_square - print square
 * @size: number of squares
 */

void print_square(int size)
{
	if (size > 0)
	{
		int n = 0;

		while (n < size)
		{
			int i;

			for (i = 0; i < size; i++)
			{
				_putchar('#');
			}
			if (n != (size - 1))
			{
				_putchar('\n');
			}

			n++;
		}
	}

	_putchar('\n');
}
