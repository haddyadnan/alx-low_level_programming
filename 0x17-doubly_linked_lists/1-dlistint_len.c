#include "lists.h"

/**
 * dlistint_len - print list
 *
 * @h: head
 * Return: size_t
 */

size_t dlistint_len(const dlistint_t *h)
{
	int i;

	i = 0;
	if (h == NULL)
		return (i);

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
