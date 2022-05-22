#include "main.h"
#include <stdio.h>

/**
 * _memset -  fills memory with a constant byte.
 *
 * @s: pointer
 * @b: constant byte
 * @n: n bytes
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		*(s + i) = b;
		i++;
		n--;
	}

	return (s);
}
