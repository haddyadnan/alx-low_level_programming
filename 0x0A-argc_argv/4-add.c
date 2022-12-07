#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Add 2 number passed as args
 * @argc: count of args
 * @argv: argument passed
 * Return: 1 if error 0 if success
 */

int main(int argc, char **argv)
{
	int sum = 0;
	int temp, i;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		temp = atoi(argv[i]);
		if (temp >= 0)
			sum = sum + temp;
	}
	printf("%d\n", sum);
	return (0);
}
