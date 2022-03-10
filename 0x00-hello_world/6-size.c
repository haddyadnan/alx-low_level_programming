#include <stdio.h>
/**
 * main - entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("Size of a char: %ld byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", __SIZEOF_INT__);
	printf("Size of a long int: %d byte(s)\n", __SIZEOF_LONG__);
	printf("Size of a long long int: %d byte(s)\n", __SIZEOF_LONG_LONG__);
	printf("Size of a float: %d byte(s)\n", __SIZEOF_FLOAT__);

	return (0);
}
