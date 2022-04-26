#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head of the list
 * @index: place to insert node
 * @n: value of the inserted node
 * Return: pointer to head of list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *curr, *new;

	curr = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (index == 0)
	{
		new->next = curr;
		*head = new;
		return (*head);
	}
	while (index > 1)
	{
		curr = curr->next;
		index--;
		if (!curr)
		{
			free(new);
			return (NULL);
		}
	}
	new->next = curr->next;
	curr->next = new;
	return (new);
}
