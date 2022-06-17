#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - print reverse
 *
 * @s: char pointer
 */

void _print_rev_recursion(char *s)
{
	int i;

	i = strlen(s);

	while (i > 0)
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');
}
