#include "main.h"

/**
 * wildcmp - compare
 *
 * @s1: s1
 * @s2: s2
 * Return: int
 */

/* TBD */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s1 == *s2)
		return (wildcmp((s1 + 1), (s2 + 1)));
	else if (*s1 != *s2 || *s2 == '*')
		return (wildcmp(s1 + 1, (s2 + 1)));
	else if (*s2 == '\0')
		return (1);
	else if (*s1 == '\0')
		return (0);
	return (0);
}
