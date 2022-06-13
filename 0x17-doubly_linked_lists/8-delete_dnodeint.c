#include "lists.h"

/**
 * delete_dnodeint_at_index - delete
 *
 * @head: dlist
 * @index: dlist
 * Return: int
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *tmpNode;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		tmpNode = *head;
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(tmpNode);
		tmpNode = NULL;
		return (1);
	}
	i = 1;
	tmpNode = (*head)->next;
	if (tmpNode)
	{
		while (tmpNode->next)
		{
			if (index == i)
			{
				tmpNode->prev->next = tmpNode->next;
				tmpNode->next->prev = tmpNode->prev;
				free(tmpNode), tmpNode = NULL;
				return (1);
			}
			i++;
			tmpNode = tmpNode->next;
		}
	}
	if (tmpNode && index == i)
	{
		tmpNode->prev->next = NULL;
		free(tmpNode);
		return (1);
	}
	return (-1);
}
