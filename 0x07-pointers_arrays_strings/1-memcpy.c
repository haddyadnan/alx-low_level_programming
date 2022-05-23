#include "main.h"

/**
 * _memcpy - copies memory area
 *
 * @dest: destination
 * @src: source
 * @n: n bytes
 * Return: char*
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		dest[i] = src[i];
		n--;
		i++;
	}
	return (dest);
}
