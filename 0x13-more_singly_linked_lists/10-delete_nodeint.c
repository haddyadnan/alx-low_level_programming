#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: head of the list
 * @index: emplacement of the node to delet
 * Return: pointr to head of list
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp, *curr;

	if (*head == NULL)
		return (-1);
	curr = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(curr);
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		curr = curr->next;
		if (curr == NULL)
			return (-1);
	}
	temp = curr->next;
	curr->next = temp->next;
	free(temp);
	return (1);
}
