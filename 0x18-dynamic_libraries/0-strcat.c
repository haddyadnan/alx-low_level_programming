#include "main.h"
#include <string.h>

/**
 * _strcat - concatenate two strings
 *
 * @dest: destination
 * @src: source
 * Return: char*
 */

char *_strcat(char *dest, char *src)
{
	char *concat;

	concat = strcat(dest, src);
	return (concat);
}
