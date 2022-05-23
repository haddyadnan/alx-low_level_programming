#include "main.h"

/**
 * _strspn - gets length of substring
 *
 * @s: string
 * @accept: acccept
 * Return: unsigned
 */

unsigned int _strspn(char *s, char *accept)
{
	int j, i = 0;
	unsigned int count = 0;

	while (accept[i] != '\0')
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count += 1;
				break;
			}
		}
		i++;
	}
	return (count + 1);
}
