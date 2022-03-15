#include "main.h"
#include <ctype.h>

/**
 * _isalpha - check if char is alpha
 * @c: character
 *
 * Return: 0
 *
 */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
