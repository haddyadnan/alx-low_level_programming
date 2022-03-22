#include "main.h"
#include <string.h>

/**
 * puts_half - print second half of a string
 * @str: char str
 *
 */

void puts_half(char *str)
{
	int i;

	i = strlen(str);
	i++;
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
