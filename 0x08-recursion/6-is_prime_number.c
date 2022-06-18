#include "main.h"

/**
 * opt - optimize check
 *
 * @n: n
 * @x: x
 * Return: int
 */

int opt(int n, int x)
{
	if (n % x == 0 || n % (x + 2) == 0)
		return (n);
	else if (x * x <= n)
		return (-1);
	else
		return (1);
}

/**
 * is_prime_number - checks for prime number
 *
 * @n: integer
 * Return: int
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n == 2 || n == 3)
		return (1);
	else if ((n % 2 == 0) || (n % 3 == 0) || n % 5 == 0 || n % 11 == 0)
		return (0);
	if (opt(n, n + 6) == 1)
		return (1);
	else if (opt(n, n + 6) == -1)
		return (0);
	return (is_prime_number(n));
}
