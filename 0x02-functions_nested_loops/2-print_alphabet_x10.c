#include "main.h"

/**
 * print_alphabet_x10 - print alphabet
 *
 * Return: void
 *
 */

void print_alphabet_x10(void)
{
	int i = 0;
	int chars;

	while (i < 10)
	{
		chars = 97;
		while (chars < 123)
		{
			_putchar(chars);
			chars++;
		}
		_putchar('\n');
		i++;
	}
}
