#include "main.h"
#include <ctype.h>

/**
 * _isdigit - Check is input is a digit
 * @c: character input
 * Return: 1 if True 0 if not
 *
 */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
