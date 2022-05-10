#include "main.h"

/**
 * get_bit - Get the bit object
 *
 * @n: n
 * @index: index from 0
 * Return: int
 */

int get_bit(unsigned long int n, unsigned int index)
{
	return ((index > (8 * sizeof(n) - 1)) ? -1 : (int)(n >> index) & 1);
}
