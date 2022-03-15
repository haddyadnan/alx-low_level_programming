#include "main.h"
#include <ctype.h>
/**
 * islower - check for lowercase letters
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
