#include "main.h"
#include <ctype.h>
/**
 * _islower - check for lowercase letters
 *
 *@c: The character
 * Return: 0
 */

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
