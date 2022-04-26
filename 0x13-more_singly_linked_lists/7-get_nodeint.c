#include "lists.h"

/**
 * get_nodeint_at_index - Get the nth node of a linked list
 * @head: pointer to head node
 * @index: index to find in linked list
 * Return: pointer
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;
	while (i < index)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
		i++;
	}
	return (head);
}
