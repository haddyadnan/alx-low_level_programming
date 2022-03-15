#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - print last digit of a number
 *
 * @n: integer
 * Return: 0
 *
 */
int print_last_digit(int n)
{
	int i;

	i = n % 10;

	if (i < 0)
	{
		_putchar(-i + '0');
		return (-i);
	}
	else
	{
		_putchar(i + '0');
		return (i);
	}
}
