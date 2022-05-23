#include "main.h"

/**
 * _strchr - locates character in a str
 *
 * @s: string
 * @c: character
 * Return: char*
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
			break;
		}
		i++;
	}
	return (0);
}
