#include <stdio.h>

/**
* main - Print all possible combinations of single digit numbers
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');

	}
	putchar('\n');

	return (0);
}
