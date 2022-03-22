#include "main.h"
#include <string.h>

/**
 * rev_string - reverse a string
 * @s: char array string type
 */

void rev_string(char *s)
{
	int i, c, len;
	char h;

	len = strlen(s);

	i = len;
	for (i--, c = 0; c < len / 2; i--, c++)
	{
		h = s[c];
		s[c] = s[i];
		s[i] = h;
	}
}
