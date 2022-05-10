#include "main.h"

/**
 * set_bit - Set the bit object
 *
 * @n: n
 * @index: index
 * Return: int
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (8 * sizeof(*n)) - 1)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
