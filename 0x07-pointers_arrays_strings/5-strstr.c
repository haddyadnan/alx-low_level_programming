#include "main.h"
#include <string.h>

/**
 * _strstr - locates a substring
 *
 * @haystack: full string
 * @needle: substring
 * Return: char*
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
