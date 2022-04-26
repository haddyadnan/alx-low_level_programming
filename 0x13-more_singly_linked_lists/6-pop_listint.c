#include "lists.h"

/**
 * pop_listint - Delete the head node of a linked list
 * @head: head node of linked list
 * Return: head
 */
int pop_listint(listint_t **head)
{
	int num;
	listint_t *curr;

	if (*head == NULL)
		return (0);

	curr = *head;
	num = curr->n;
	*head = curr->next;
	free(curr);

	return (num);
}
