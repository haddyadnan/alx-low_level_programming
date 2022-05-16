#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add - adds two num
 * @a: number 1
 * @b: number 2
 * Return: sum
 **/

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract two num
 * @a: number 1
 * @b: number 2
 * Return: substraction
 **/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two num
 * @a: number 1
 * @b: number 2
 * Return: multiplication
 **/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two num
 * @a: number 1
 * @b: number 2
 * Return: divison
 **/

int op_div(int a, int b)
{

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulus
 * @a: number 1
 * @b: number 2
 * Return: mod
 **/

int op_mod(int a, int b)
{

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
