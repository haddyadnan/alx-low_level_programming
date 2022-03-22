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
	strcpy(src, dest);
	return (dest);
}
