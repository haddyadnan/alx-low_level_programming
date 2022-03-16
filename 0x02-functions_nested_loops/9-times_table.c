#include "main.h"
/**
 * times_table - prints the 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
		_putchar('0');
		for (b = 1; b <= 9; b++)
		{
			c = a * b;
			_putchar(',');
			_putchar(' ');
			if (c <= 9)
			{
				_putchar(32);
				_putchar(c + '0');
			}
			else
			{
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
