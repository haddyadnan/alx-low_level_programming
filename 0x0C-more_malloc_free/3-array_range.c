#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: min
 * @max: max
 * Return: pointer or null
 **/
int *array_range(int min, int max)
{
	int i, size;
	int *ptr;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	ptr = malloc(size * sizeof(*ptr));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size && min <= max; i++, min++)
		*(ptr + i) = min;
	return (ptr);
}
