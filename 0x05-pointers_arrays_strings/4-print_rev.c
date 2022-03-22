#include "main.h"
#include <string.h>

/**
 * print_rev - print string in reverse
 * @s: string
 *
 */
void print_rev(char *s)
{
	int len;

	len = strlen(s);
	for (len = len - 1; len >= 0; len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
