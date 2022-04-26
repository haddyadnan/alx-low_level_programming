#include "lists.h"
/**
 * reverse_listint - define function
 * @head: describe argument
 * Return: what does it return?
 */

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

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = NULL;

	if (*head == NULL)
		return (NULL);

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
