#include "main.h"

/**
 * flip_bits - returns number of bits
 *
 * @n:number 1
 * @m: number 2
 * Return: unsigned int
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int bits;
	unsigned long int flp;

	flp = n ^ m;
	bits = 0;

	while (flp)
	{
		bits++;
		flp &= (flp - 1);
	}

	return (bits);
}
