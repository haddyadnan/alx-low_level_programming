#include <stdio.h>

/**
 * main - entry pount
 * Return: 0
 */
int main(void)
{
	int n = 2;
	long long int i = 1, j = 2;
	long long int k;

	printf("%llu, ", i);
	while (n < 99)
	{
		if (n == 98)
		{
			printf("%llu\n", j);
		}
		else
		{
			printf("%llu, ", j);
		}

		k = j;
		j += i;
		i = k;
		n++;
	}

	return (0);
}
