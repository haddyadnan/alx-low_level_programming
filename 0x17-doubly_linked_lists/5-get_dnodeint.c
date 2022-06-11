#include "lists.h"

/**
 * get_dnodeint_at_index - Get the dnodeint at index object
 * @head: dlist head
 * @index: dlist index
 * Return: dlistint_t*
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	i = 0;
	while (head)
	{
		if (i == index)
		{
			return (head);
		}
		i += 1;
		head = head->next;
	}
	return (NULL);
}
