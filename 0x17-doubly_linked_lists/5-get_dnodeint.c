#include "lists.h"

/**
 * get_dnodeint_at_index - Get the dnodeint at index object
 *
 * @head: 	dlist
 * @index: 	dlist
 * Return: dlistint_t*
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	i = 0;
	while (head->next)
	{
		if (i == index)
		{
			return (head);
			break;
		}
		else
			i += 1;
	}
	return (NULL);
}
