#include "lists.h"
#include <stdio.h>

/**
 * listint_len - find number of elements in the node
 *
 * @h: linked list
 * Return: i
 */

size_t listint_len(const listint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		h = h->next;
	}
	return (i);
}
