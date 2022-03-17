#include "main.h"

/**
 * more_numbers - print 0 - 14 10times
 *
 */
void more_numbers(void)
{
	int i, count = 0;

	while (count < 10)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
			{
				_putchar(i / 10 + '0');
			}

			_putchar(i % 10 + '0');
		}
		_putchar('\n');
		count++;
	}
}
