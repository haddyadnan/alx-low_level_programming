#include "main.h"

/**
 * print_sign - prints sign
 *
 * @n: number
 * Return: 1, 0, -1
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		return (0);
	}
}
