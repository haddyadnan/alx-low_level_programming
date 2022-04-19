#include "main.h"
#include <string.h>

/**
 * _strncat - concatenate with n bytes
 *
 * @dest: destination
 * @src: Source
 * @n: n bytes
 * Return: char*
 */

char *_strncat(char *dest, char *src, int n)
{
	char *concat;

	concat = strncat(dest, src, n);
	return (concat);
}
