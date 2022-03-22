#include "main.h"
#include <string.h>

/**
 * _strcpy - str copy
 *
 * @dest: destination
 * @src: source
 * Return: char*
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
