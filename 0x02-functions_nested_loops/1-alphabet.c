#include "main.h"

/**
 * print_alphabet - Print alphabets in lowercase
 *
 * Return: 0
 *
 */

void print_alphabet(void)
{
	int i;

	for (int i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	// _putchar("/n");
}

int main(void)
{
	print_alphabet();
	return (0);
}
