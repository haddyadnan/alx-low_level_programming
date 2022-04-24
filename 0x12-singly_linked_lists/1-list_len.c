#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * list_len - len of list
 * @h: linked list
 * Return: len
 */
size_t list_len(const list_t *h)
{
	int i;

	for (i = 0; h; i++)
	{
		h = h->next; /* iterate next number of times */
	}
	return (i);
}
