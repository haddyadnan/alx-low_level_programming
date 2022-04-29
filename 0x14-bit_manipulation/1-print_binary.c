#include "main.h"

/**
 * @brief
 *
 * @param n
 */

void print_binary(unsigned long int n)
{
	unsigned long int temp;
	int shifts;

	if (n == 0)
		_putchar('0');

	for (temp = n, shifts = 0; (temp >>= 1) > 0; shifts++)
		;

	for (; shifts >= 0; shifts--)
	{
		if ((n >> shifts) & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
