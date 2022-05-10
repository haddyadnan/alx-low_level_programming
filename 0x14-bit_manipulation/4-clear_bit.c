#include "main.h"

/**
 * clear_bit - set bit of index to 0
 *
 * @n: n
 * @index: index
 * Return: int
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	*n = *n & ~(1 << index);
	return ((index > 8 * sizeof(*n)) ? -1 : 1);
}
