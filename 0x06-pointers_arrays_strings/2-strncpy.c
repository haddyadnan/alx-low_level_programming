#include "main.h"
#include <string.h>

/**
 * _strncpy - cpy
 *
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: char*
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *cpy;

	cpy = strncpy(dest, src, n);
	return (cpy);
}
