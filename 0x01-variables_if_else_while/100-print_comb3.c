#include <stdio.h>

/**
* main - Print combinations of two digit numbers
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int first, second;

	for (second = 0; second <= 9; second++)
	{
		for (first = second + 1; first <= 9; first++)
	{
		putchar(second + '0');
		putchar(first + '0');

		if (second < 8)
		{
			putchar(',');
			putchar(' ');
		}
	}
	}
	putchar('\n');

	return (0);
}
