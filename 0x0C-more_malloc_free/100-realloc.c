#include <stdlib.h>
#include "main.h"
/**
 * *_realloc -  reallocates a memory block
 * @ptr: pointer
 * @old_size: allocated space for ptr
 * @new_size: new size
 * Return: pointeror null
 **/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned char *new_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size * sizeof(void *));
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	new_ptr = malloc(new_size * sizeof(char));
	if (new_ptr == NULL)
		return (NULL);
	i = 0;
	if (new_size > old_size)
	{
		while (i < old_size)
		{
			new_ptr[i] = ((char *)ptr)[i];
			i++;
		}
		free(ptr);
		return (new_ptr);
	}
	while (i < new_size)
	{
		new_ptr[i] = ((char *)ptr)[i];
		i++;
	}
	free(ptr);
	return (new_ptr);
}
