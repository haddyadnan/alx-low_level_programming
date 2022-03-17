#include "main.h"
#include <ctype.h>

/**
 * _isupper - finds if character is upper case
 *@c: character
 * Return: 1 or 0
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
