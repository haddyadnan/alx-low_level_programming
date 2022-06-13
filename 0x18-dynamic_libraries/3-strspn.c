#include "main.h"
#include <string.h>
/**
 * _strspn - gets length of substring
 *
 * @s: string
 * @accept: acccept
 * Return: unsigned
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
