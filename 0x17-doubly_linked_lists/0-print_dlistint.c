#include "lists.h"

/**
 * print_dlistint - print list
 *
 * @h: head
 * Return: size_t
 */

size_t print_dlistint(const dlistint_t *h)
{
	int i;

	i = 0;
	if (h == NULL)
		return (i);

	while (h)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
