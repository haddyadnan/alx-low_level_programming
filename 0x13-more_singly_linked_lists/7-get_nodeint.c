#include "lists.h"

/**
 * get_nodeint_at_index - Get the nth node of a linked list
 * @head: pointer to head node
 * @index: index to find in linked list
 * Return: pointer
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *curr;
	unsigned int i;

	curr = head;
	i = 0;
	while (i < index)
	{
		if (i)
			i = i->next;
		else
			return (NULL);
		i++;
	}

	if (i)
		return (i);
	else
		return (NULL);
}
