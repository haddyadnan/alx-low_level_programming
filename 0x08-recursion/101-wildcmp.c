#include "main.h"

/**
 * @brief
 *
 * @param s1
 * @param s2
 * @return int
 */

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
