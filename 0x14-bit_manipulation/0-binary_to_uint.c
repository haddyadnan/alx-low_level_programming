#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned integer
 *
 * @b: string
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum, exp;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (sum = 1, exp = 0, i--; i >= 0; i--, sum *= 2)
	{
		if (b[i] == '1')
			exp += sum;
	}

	return (exp);
}
