#include "lists.h"

/**
 * add_nodeint_end - add node to end
 *
 * @head: head singly list
 * @n: n
 * Return: listint_t*
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *curr;
	listint_t *new;

	curr = *head;
	for (i = 0; curr; i++)
		curr = curr->next;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (current)
		current->next = new;
	else
		*head = new;
	return (new);
}
