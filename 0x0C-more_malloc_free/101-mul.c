#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - multiply 2 number passed as args
 * @argc: count of args
 * @argv: argument passed
 * Return: 1 if error 0 if success
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[1] && argv[2])
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}

	return (1);
}
