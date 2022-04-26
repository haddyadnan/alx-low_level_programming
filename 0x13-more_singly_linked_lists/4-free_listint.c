#include "lists.h"

/**
 * free_listint - free list
 * @head: head of linked list
 */
void free_listint(listint_t *head)
{
	listint_t *curr;

	while (head != NULL)
	{
		curr = head;
		head = head->next;
		free(curr);
	}
}
