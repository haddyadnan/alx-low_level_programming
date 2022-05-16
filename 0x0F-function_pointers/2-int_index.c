#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 *
 * @array: array
 * @size: number of elements
 * @cmp: pointer to function to compare
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, hold;

	if (size < 1 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		hold = cmp(array[i]);
		if (hold != 0)
			return (i);
	}
	return (-1);
}
