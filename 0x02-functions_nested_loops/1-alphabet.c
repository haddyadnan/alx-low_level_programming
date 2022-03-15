#include "main.h"

/**
 * print_alphabet - Print alphabets in lowercase
 * main - print
 * Return: 0
 *
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

/* int main(void)
{
	print_alphabet();
	return (0);
}
 */
