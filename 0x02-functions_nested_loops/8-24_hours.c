#include "main.h"

/**
 * jack_bauer - print 00:00 tp 23:59
 *
 * Return: int
 *
 */

void jack_bauer(void)
{
	int a, b, c, d;

	a = 0;
	b = 0;
	c = 0;
	d = 0;

	while (1)
	{
		_putchar(a + '0');
		_putchar(b + '0');
		_putchar(':');
		_putchar(c + '0');
		_putchar(d + '0');
		_putchar('\n');

		d++;
		if (d > 9)
		{
			d = 0;
			c++;
		}
		if (c > 5)
		{
			c = 0;
			b++;
		}
		if (b > 9)
		{
			b = 0;
			a++;
		}
		if ((a == 2) && (b == 3) && (c == 5) && (d == 9))
		{

			_putchar(a + '0');
			_putchar(b + '0');
			_putchar(':');
			_putchar(c + '0');
			_putchar(d + '0');
			_putchar('\n');
			break;
		}
	}
}
